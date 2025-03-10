#!/usr/bin/env php
<?php

/*
 +-----------------------------------------------------------------------+
 | This file is part of the Roundcube Webmail client                     |
 |                                                                       |
 | Copyright (C) The Roundcube Dev Team                                  |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 | PURPOSE:                                                              |
 |   Update cache-baster marks for css background images                 |
 +-----------------------------------------------------------------------+
 | Author: Aleksander Machniak <alec@alec.pl>                            |
 +-----------------------------------------------------------------------+
*/

define('INSTALL_PATH', realpath(__DIR__ . '/..') . '/');

require_once INSTALL_PATH . 'program/include/clisetup.php';

// get arguments
$opts = rcube_utils::get_opt(['d' => 'dir', 'q' => 'quiet:bool']);

if (empty($opts['dir'])) {
    echo "Skin directory not specified (--dir). Using skins/ and plugins/*/skins/.\n";

    $dir = INSTALL_PATH . 'skins';
    $dir_p = INSTALL_PATH . 'plugins';
    $skins = glob("{$dir}/*", \GLOB_ONLYDIR);
    $skins_p = glob("{$dir_p}/*/skins/*", \GLOB_ONLYDIR);

    $dirs = array_merge($skins, $skins_p);
}
// Check if directory exists
elseif (!file_exists($opts['dir'])) {
    rcube::raise_error("Specified directory doesn't exist.", false, true);
} else {
    $dirs = [$opts['dir']];
}

$quiet = !empty($opts['quiet']);

foreach ($dirs as $dir) {
    $img_dir = $dir . '/images';
    if (!file_exists($img_dir)) {
        continue;
    }

    $files = get_files($dir);
    $images = get_images($img_dir);
    $find = [];
    $replace = [];

    // build regexps array
    foreach ($images as $path => $sum) {
        $path_ex = str_replace('.', '\.', $path);
        $find[] = "#url\\(['\"]?images/{$path_ex}(\\?v=[a-f0-9-\\.]+)?['\"]?\\)#";
        $replace[] = "url(images/{$path}?v={$sum})";
    }

    foreach ($files as $file) {
        $file = $dir . '/' . $file;
        if (!$quiet) {
            echo "File: {$file}\n";
        }
        $content = file_get_contents($file);
        $content = preg_replace($find, $replace, $content, -1, $count);
        if ($count) {
            file_put_contents($file, $content);
        }
    }
}

function get_images($dir)
{
    global $quiet;

    $images = [];
    $dh = opendir($dir);

    while ($file = readdir($dh)) {
        if (preg_match('/^(.+)\.(gif|ico|png|jpg|jpeg)$/', $file, $m)) {
            $filepath = "{$dir}/{$file}";
            $images[$file] = substr(md5_file($filepath), 0, 4) . '.' . filesize($filepath);
            if (!$quiet) {
                echo "Image: {$filepath} ({$images[$file]})\n";
            }
        } elseif ($file != '.' && $file != '..' && is_dir($dir . '/' . $file)) {
            foreach (get_images($dir . '/' . $file) as $img => $sum) {
                $images[$file . '/' . $img] = $sum;
            }
        }
    }

    closedir($dh);

    return $images;
}

function get_files($dir)
{
    $files = [];
    $dh = opendir($dir);

    while ($file = readdir($dh)) {
        if (preg_match('/^(.+)\.(css|html)$/', $file, $m)) {
            $files[] = $file;
        } elseif ($file != '.' && $file != '..' && is_dir($dir . '/' . $file)) {
            foreach (get_files($dir . '/' . $file) as $f) {
                $files[] = $file . '/' . $f;
            }
        }
    }

    closedir($dh);

    return $files;
}
