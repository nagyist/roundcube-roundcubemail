<?php

/*
 +-----------------------------------------------------------------------+
 | Localization file of the Roundcube Webmail client                     |
 |                                                                       |
 | Copyright (C) The Roundcube Dev Team                                  |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 +-----------------------------------------------------------------------+
*/

$messages = [];
$messages['errortitle']  = 'An error occurred!';
$messages['loginfailed']  = 'Login failed.';
$messages['cookiesdisabled'] = 'Your browser does not accept cookies.';
$messages['sessionerror'] = 'Your session is invalid or expired.';
$messages['cookiesmismatch'] = 'Cookie mismatch detected. Please, clear your browser\'s cookies.';
$messages['storageerror'] = 'Connection to storage server failed.';
$messages['servererror'] = 'Server Error!';
$messages['servererrormsg'] = 'Server Error: $msg';
$messages['accountlocked'] = 'Too many failed login attempts. Try again later.';
$messages['connerror'] = 'Connection Error (Failed to reach the server)!';
$messages['dberror'] = 'Database Error!';
$messages['dbconnerror'] = 'Unable to connect to the database!';
$messages['windowopenerror'] = 'The popup window was blocked!';
$messages['requesttimedout'] = 'Request timed out';
$messages['errorreadonly'] = 'Unable to perform operation. Folder is read-only.';
$messages['errornoperm'] = 'Unable to perform operation. Permission denied.';
$messages['erroroverquota'] = 'Unable to perform operation. No free disk space.';
$messages['erroroverquotadelete'] = 'No free disk space. Use SHIFT+DEL to delete a message.';
$messages['invalidrequest'] = 'Invalid request! No data was saved.';
$messages['invalidhost'] = 'Invalid server name.';
$messages['nomessagesfound'] = 'No messages found in this mailbox.';
$messages['loggedout'] = 'You have successfully terminated the session. Goodbye!';
$messages['mailboxempty'] = 'Mailbox is empty';
$messages['nomessages'] = 'No messages';
$messages['refreshing'] = 'Refreshing...';
$messages['loading'] = 'Loading...';
$messages['uploading'] = 'Uploading file...';
$messages['attaching'] = 'Attaching file...';
$messages['uploadingmany'] = 'Uploading files...';
$messages['loadingdata'] = 'Loading data...';
$messages['checkingmail'] = 'Checking for new messages...';
$messages['sendingmessage'] = 'Sending message...';
$messages['messagesent'] = 'Message sent successfully.';
$messages['savingmessage'] = 'Saving message...';
$messages['messagesaved'] = 'Message saved to Drafts.';
$messages['successfullysaved'] = 'Successfully saved.';
$messages['savingresponse'] = 'Saving response text...';
$messages['deleteresponseconfirm'] = 'Do you really want to delete this response text?';
$messages['nocontactselected'] = 'You have not selected a contact yet.';
$messages['addedsuccessfully'] = 'Contact added successfully to address book.';
$messages['contactexists'] = 'A contact with the same email address already exists.';
$messages['contactnameexists'] = 'A contact with the same name already exists.';
$messages['blockedimages'] = 'To protect your privacy, remote images are blocked in this message.';
$messages['blockedresources'] = 'To protect your privacy remote resources have been blocked.';
$messages['suspiciousemail'] = 'This message contains suspicious email addresses that may be fraudulent.';
$messages['bccemail'] = 'The forwarded message(s) contain confidential recipients (Bcc).';
$messages['bouncehint'] = 'The message will be sent without any modifications, i.e. using the original body, headers and recipients.';
$messages['encryptedmessage'] = 'This is an encrypted message and can not be displayed. Sorry!';
$messages['externalmessagedecryption'] = 'This is an encrypted message and can be decrypted with your browser extension.';
$messages['nopubkeyfor'] = 'No valid public key found for $email';
$messages['nopubkeyforsender'] = 'No valid public key found for your sender identity. Do you want to encrypt the message for the recipients only?';
$messages['encryptnoattachments'] = 'Already uploaded attachments cannot be encrypted. Please re-add them in the encryption editor.';
$messages['searchpubkeyservers'] = 'Do you want to search public key servers for the missing keys?';
$messages['encryptpubkeysfound'] = 'The following public keys have been found:';
$messages['keyservererror'] = 'Failed to get key from keyserver.';
$messages['keyimportsuccess'] = 'Public key $key successfully imported into your keyring.';
$messages['nocontactsfound'] = 'No contacts found.';
$messages['contactnotfound'] = 'The requested contact was not found.';
$messages['contactsearchonly'] = 'You have to use a search form to see contacts from the selected addressbook.';
$messages['sendingfailed'] = 'Failed to send message.';
$messages['senttooquickly'] = 'Please wait $sec sec(s). before sending this message.';
$messages['errorsavingsent'] = 'An error occurred while saving sent message.';
$messages['errorsaving'] = 'An error occurred while saving.';
$messages['errormoving'] = 'Could not move the message(s).';
$messages['errorcopying'] = 'Could not copy the message(s).';
$messages['errordeleting'] = 'Could not delete the message(s).';
$messages['errormarking'] = 'Could not mark the message(s).';
$messages['alerttitle'] = 'Attention';
$messages['confirmationtitle'] = 'Are you sure...';
$messages['deletecontactconfirm']  = 'Do you really want to delete selected contact(s)?';
$messages['deletegroupconfirm']  = 'Do you really want to delete selected group?';
$messages['deletemessagesconfirm'] = 'Do you really want to delete selected message(s)?';
$messages['deletefolderconfirm']  = 'Do you really want to delete this folder?';
$messages['movefolderconfirm']  = 'Do you really want to move this folder?';
$messages['purgefolderconfirm']  = 'Do you really want to delete all messages in this folder?';
$messages['contactdeleting'] = 'Deleting contact(s)...';
$messages['groupdeleting'] = 'Deleting group...';
$messages['folderdeleting'] = 'Deleting folder...';
$messages['foldermoving'] = 'Moving folder...';
$messages['foldersubscribing'] = 'Subscribing folder...';
$messages['folderunsubscribing'] = 'Unsubscribing folder...';
$messages['formincomplete'] = 'The form was not completely filled out.';
$messages['noemailwarning'] = 'Please enter a valid email address.';
$messages['nonamewarning']  = 'Please enter a name.';
$messages['nopagesizewarning'] = 'Please enter a page size.';
$messages['nosenderwarning'] = 'Please enter sender email address.';
$messages['recipientsadded'] = 'Recipient(s) added successfully.';
$messages['norecipientwarning'] = 'Please enter at least one recipient.';
$messages['disclosedrecipwarning'] = 'All recipients will see each other\'s e-mail addresses. To prevent this and protect their privacy you can use the Bcc field.';
$messages['disclosedreciptitle'] = 'Too many public recipients';
$messages['nosubjectwarning']  = 'The "Subject" field is empty. Would you like to enter one now?';
$messages['nosubjecttitle']  = 'No subject';
$messages['nobodywarning'] = 'Send this message without text?';
$messages['notsentwarning'] = 'The message has not been sent and has unsaved changes. Do you want to discard your changes?';
$messages['restoresavedcomposedata'] = 'A previously composed but unsent message was found.\n\nSubject: $subject\nSaved: $date\n\nDo you want to restore this message?';
$messages['nosearchname'] = 'Please enter a contact name or email address.';
$messages['notuploadedwarning'] = 'Not all attachments have been uploaded yet. Please wait or cancel the upload.';
$messages['searchsuccessful'] = '$nr messages found.';
$messages['contactsearchsuccessful'] = '$nr contacts found.';
$messages['searchnomatch'] = 'Search returned no matches.';
$messages['searching'] = 'Searching...';
$messages['checking'] = 'Checking...';
$messages['stillsearching'] = 'Still searching...';
$messages['nospellerrors'] = 'No spelling errors found.';
$messages['folderdeleted'] = 'Folder successfully deleted.';
$messages['foldersubscribed'] = 'Folder successfully subscribed.';
$messages['folderunsubscribed'] = 'Folder successfully unsubscribed.';
$messages['folderpurged'] = 'Folder successfully emptied.';
$messages['folderexpunged'] = 'Folder successfully compacted.';
$messages['deletedsuccessfully'] = 'Successfully deleted.';
$messages['converting'] = 'Removing formatting...';
$messages['messageopenerror'] = 'Could not load message from server.';
$messages['filelinkerror'] = 'Attaching the file failed.';
$messages['fileuploaderror'] = 'File upload failed.';
$messages['csvfilemismatch'] = 'Import of multiple CSV files with different fields is not supported.';
$messages['filesizeerror'] = 'The uploaded file exceeds the maximum size of $size.';
$messages['filecounterror'] = 'You can upload maximum $count files at once.';
$messages['msgsizeerror'] = 'Failed to attach a file. Maximum size of a message ($size) exceeded.';
$messages['msgsizeerrorfwd'] = 'Maximum size of a message ($size) exceeded. $num message(s) have not been attached.';
$messages['copysuccess'] = 'Successfully copied $nr contacts.';
$messages['movesuccess'] = 'Successfully moved $nr contacts.';
$messages['copyerror'] = 'Could not copy any contacts.';
$messages['moveerror'] = 'Could not move any contacts.';
$messages['sourceisreadonly'] = 'This address source is read only.';
$messages['errorsavingcontact'] = 'Could not save the contact address.';
$messages['movingmessage'] = 'Moving message(s)...';
$messages['copyingmessage'] = 'Copying message(s)...';
$messages['copyingcontact'] = 'Copying contact(s)...';
$messages['movingcontact'] = 'Moving contact(s)...';
$messages['deletingmessage'] = 'Deleting message(s)...';
$messages['markingmessage'] = 'Marking message(s)...';
$messages['addingmember'] = 'Adding contact(s) to the group...';
$messages['removingmember'] = 'Removing contact(s) from the group...';
$messages['receiptsent'] = 'Successfully sent a read receipt.';
$messages['errorsendingreceipt'] = 'Could not send the receipt.';
$messages['deleteidentityconfirm'] = 'Do you really want to delete this identity?';
$messages['nodeletelastidentity'] = 'You cannot delete this identity, it\'s your last one.';
$messages['forbiddencharacter'] = 'Folder name contains a forbidden character.';
$messages['selectimportfile'] = 'Please select a file to upload.';
$messages['addresswriterror'] = 'The selected address book is not writeable.';
$messages['contactaddedtogroup'] = 'Successfully added the contacts to this group.';
$messages['contactremovedfromgroup'] = 'Successfully removed contacts from this group.';
$messages['nogroupassignmentschanged'] = 'No group assignments changed.';
$messages['importwait'] = 'Importing, please wait...';
$messages['importformaterror'] = 'Import failed! The uploaded file is not a valid import data file.';
$messages['importconfirm'] = '<b>Successfully imported $inserted contacts</b>';
$messages['importconfirmskipped'] = '<b>Skipped $skipped existing contacts</b>';
$messages['importconfirminvalid'] = '<b>Skipped $invalid invalid contacts</b>';
$messages['importconfirmerrors'] = '<b>Failed to import $errors valid contacts</b>';
$messages['importmessagesuccess'] = 'Successfully imported $nr messages';
$messages['importmessageerror'] = 'Import failed! The uploaded file is not a valid message or mailbox file';
$messages['opnotpermitted'] = 'Operation not permitted!';
$messages['nofromaddress'] = 'Missing email address in selected identity.';
$messages['editorwarning'] = 'Switching editor type may cause text formatting to be lost. Do you wish to continue?';
$messages['httpreceivedencrypterror'] = 'A fatal configuration error occurred. Contact your administrator immediately. <b>Your message can not be sent.</b>';
$messages['smtpconnerror'] = 'SMTP Error ($code): Connection to server failed.';
$messages['smtpautherror'] = 'SMTP Error ($code): Authentication failed.';
$messages['smtpfromerror'] = 'SMTP Error ($code): Failed to set sender "$from" ($msg).';
$messages['smtptoerror'] = 'SMTP Error ($code): Failed to add recipient "$to" ($msg).';
$messages['smtprecipientserror'] = 'SMTP Error: Unable to parse recipients list.';
$messages['smtputf8error'] = 'SMTP Error: Server does not support Unicode in email address.';
$messages['smtpsizeerror'] = 'SMTP Error: Message size exceeds server limit ($limit)';
$messages['smtperror'] = 'SMTP Error: $msg';
$messages['emailformaterror'] = 'Invalid email address: $email';
$messages['toomanyrecipients'] = 'Too many recipients. Reduce the number of recipients to $max.';
$messages['maxgroupmembersreached'] = 'The number of group members exceeds the maximum of $max.';
$messages['internalerror'] = 'An internal error occurred. Please try again.';
$messages['contactdelerror'] = 'Could not delete contact(s).';
$messages['contactdeleted'] = 'Contact(s) deleted successfully.';
$messages['contactrestoreerror'] = 'Could not restore deleted contact(s).';
$messages['contactrestored'] = 'Contact(s) restored successfully.';
$messages['groupdeleted'] = 'Group deleted successfully.';
$messages['grouprenamed'] = 'Group renamed successfully.';
$messages['groupcreated'] = 'Group created successfully.';
$messages['savedsearchdeleted'] = 'Saved search deleted successfully.';
$messages['savedsearchdeleteerror'] = 'Could not delete saved search.';
$messages['savedsearchcreated'] = 'Saved search created successfully.';
$messages['savedsearchcreateerror'] = 'Could not create saved search.';
$messages['messagedeleted'] = 'Message(s) deleted successfully.';
$messages['messagemoved'] = 'Message(s) moved successfully.';
$messages['messagemovedtotrash'] = 'Message(s) moved to Trash successfully.';
$messages['messagecopied'] = 'Message(s) copied successfully.';
$messages['messagemarked'] = 'Message(s) marked successfully.';
$messages['autocompletechars'] = 'Enter at least $min characters for autocompletion.';
$messages['autocompletemore'] = 'More matching entries found. Please type more characters.';
$messages['namecannotbeempty'] = 'Name cannot be empty.';
$messages['nametoolong'] = 'Name is too long.';
$messages['namedotforbidden'] = 'Folder name cannot start with a dot.';
$messages['folderupdated'] = 'Folder updated successfully.';
$messages['foldercreated'] = 'Folder created successfully.';
$messages['invalidimageformat'] = 'Not a valid image format.';
$messages['mispellingsfound'] = 'Spelling errors detected in the message.';
$messages['parentnotwritable'] = 'Unable to create/move folder into selected parent folder. No access rights.';
$messages['messagetoobig'] = 'The message part is too big to process it.';
$messages['attachmentvalidationerror'] = 'This attachment is suspicious because its type doesn\'t match the type declared in the message. If you do not trust the sender, you shouldn\'t open it in the browser because it may contain malicious contents.<br/><br/><em>Expected: $expected; found: $detected</em>';
$messages['noscriptwarning'] = 'Warning: This webmail service requires Javascript! In order to use it please enable Javascript in your browser\'s settings.';
$messages['messageissent'] = 'The message was already sent, but not saved yet. Do you want to save it now?';
$messages['errnotfound'] = 'File Not Found';
$messages['errnotfoundexplain'] = 'The requested resource was not found!';
$messages['errfailedrequest'] = 'Failed request';
$messages['errauthorizationfailed'] = 'Authorization Failed';
$messages['errunauthorizedexplain'] = 'Could not verify that you are authorized to access this service!';
$messages['errrequestcheckfailed'] = 'Request Check Failed';
$messages['errcsrfprotectionexplain'] = "For your protection, access to this resource is secured against CSRF.\nIf you see this, you probably didn't log out before leaving the web application.\n\nHuman interaction is now required to continue.";
$messages['errcontactserveradmin'] = 'Please contact your server-administrator.';
$messages['clicktoresumesession'] = 'Click here to resume your previous session';
$messages['errcomposesession'] = 'Compose session error';
$messages['errcomposesessionexplain'] = 'Requested compose session not found.';
$messages['clicktocompose'] = 'Click here to compose a new message';
$messages['nosupporterror'] = 'This feature is not supported by your web browser.';
$messages['siginserted'] = 'Signature inserted successfully.';
$messages['responseinserted'] = 'Response inserted successfully.';
$messages['noresponsesavailable'] = 'No responses available';
$messages['listempty'] = 'The list is empty.';
$messages['listusebutton'] = 'Use the Create button to add a new record.';
$messages['keypaircreatesuccess'] = 'A new key pair has been successfully created for $identity.';
$messages['emptyattachment'] = 'This attachment appears to be empty.<br>Please, check with the person who sent this.';
$messages['oauthloginfailed'] = 'OAuth login failed. Please try again.';
$messages['oauthinvalidrequest'] = 'Authorization request was invalid or incomplete.';
$messages['oauthaccessdenied'] = 'Authorization server or the user denied the request.';
