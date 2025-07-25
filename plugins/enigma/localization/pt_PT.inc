<?php

/*
 +-----------------------------------------------------------------------+
 | Localization file of the Roundcube Webmail Enigma plugin              |
 |                                                                       |
 | Copyright (C) The Roundcube Dev Team                                  |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/roundcube/roundcube-webmail/plugin-enigma/
*/

$labels['encryption'] = 'Encriptação';
$labels['enigmacerts'] = 'Certificados S/MIME';
$labels['enigmakeys'] = 'Chaves PGP';
$labels['keysfromto'] = 'Chave de $from a $to de $count';
$labels['keyname'] = 'Nome';
$labels['keyid'] = 'ID da Chave';
$labels['keyuserid'] = 'ID do Utilizador';
$labels['keytype'] = 'Tipo de chave';
$labels['fingerprint'] = 'Impressão digital';
$labels['subkeys'] = 'Sub-chaves';
$labels['keyprops'] = 'Propriedades da chave';
$labels['basicinfo'] = 'Informação básica';
$labels['userids'] = 'Utilizadores adicionais';
$labels['typepublickey'] = 'chave publica';
$labels['typekeypair'] = 'par de chaves';
$labels['keyattfound'] = 'Esta mensagem contém chave(s) PGP anexada(s).';
$labels['keyattimport'] = 'Importar chave(s)';
$labels['typesign'] = 'Assinar';
$labels['typeencrypt'] = 'Encriptar';
$labels['typecert'] = 'Certificar';
$labels['typeauth'] = 'Autenticação';
$labels['subkeyid'] = 'ID';
$labels['subkeyalgo'] = 'Algoritmo';
$labels['subkeycreated'] = 'Criado';
$labels['subkeyexpires'] = 'Expira';
$labels['subkeyusage'] = 'Uso';
$labels['expiresnever'] = 'nunca';
$labels['unknown'] = 'desconhecido';
$labels['uservalid'] = 'Válido';
$labels['userid'] = 'ID';
$labels['valid'] = 'válido';
$labels['supportencryption'] = 'Activar a encriptação de mensagens e assinatura';
$labels['supportsignatures'] = 'Activar a verificação de assinaturas de mensagens';
$labels['supportdecryption'] = 'Activar desencriptação de mensagem';
$labels['signdefault'] = 'Assinar todas as mensagens por defeito';
$labels['encryptdefault'] = 'Encriptar todas as mensagens por defeito';
$labels['attachpubkeydefault'] = 'Anexar a minha chave pública PGP por defeito';
$labels['passwordtime'] = 'Manter senhas de chave privada para';
$labels['nminutes'] = '$m minuto(s)';
$labels['wholesession'] = 'toda a sessão';
$labels['createkeys'] = 'Criar um novo par de chaves';
$labels['importkeys'] = 'Importar chave(s)';
$labels['exportkeys'] = 'Exportar chave(s)';
$labels['keyactions'] = 'Ações das chaves...';
$labels['keyremove'] = 'Remover';
$labels['keydisable'] = 'Desactivar';
$labels['keyrevoke'] = 'Revogar';
$labels['keysend'] = 'Enviar chave pública numa mensagem';
$labels['keychpass'] = 'Alterar senha';
$labels['keyadd'] = 'Adicionar chave';
$labels['newkeyident'] = 'Identidade';
$labels['newkeypass'] = 'Senha';
$labels['newkeypassconfirm'] = 'Confirmar senha';
$labels['newkeytype'] = 'Tipo de chave';
$labels['rsa2048'] = 'RSA - 2048 bits';
$labels['rsa4096'] = 'RSA - 4096 bits';
$labels['ecckeypair'] = 'ECC (Curva Elíptica)';
$labels['keygenerating'] = 'A gerar chaves...';
$labels['encryptionoptions'] = 'Opções de encriptação...';
$labels['encryptmsg'] = 'Encriptar esta mensagem';
$labels['signmsg'] = 'Assinar digitalmente esta mensagem';
$labels['sendunencrypted'] = 'Enviar desencriptado';
$labels['enterkeypasstitle'] = 'Digite chave de frase de acesso';
$labels['enterkeypass'] = 'É necessária uma frase de acesso para desbloquear a chave secreta ($keyid) do utilizador: $user.';
$labels['attachpubkeymsg'] = 'Anexar a minha chave pública';
$labels['keyexportprompt'] = 'Deseja incluir as chaves secretas no ficheiro, guardado, de chaves OpenPGP?';
$labels['onlypubkeys'] = 'Exportar apenas Chaves Públicas';
$labels['withprivkeys'] = 'Exportar chaves secretas';
$labels['findkey'] = 'Pesquisar no(s) servidor(es) de chaves';
$labels['keyimportlabel'] = 'Importar do ficheiro';
$labels['keyimportsearchlabel'] = 'Pesquisar no(s) servidor(es) de chaves';
$labels['managekeys'] = 'Gerir chaves PGP';
$labels['identitymatchingprivkeys'] = 'Tem $nr correspondências de chaves PGP privadas armazenadas no seu porta-chaves:';
$labels['identitynoprivkeys'] = 'Esta identidade do remetente ainda não tem uma chave PGP privada armazenada no seu porta-chaves.';
$labels['arialabelkeyexportoptions'] = 'Opções de exportação de chaves';
$labels['arialabelkeysearchform'] = 'Formulário de pesquisa de chaves';
$labels['arialabelkeyoptions'] = 'Opções da chave';
$messages['sigvalid'] = 'Assinatura verificada de $sender.';
$messages['sigvalidpartial'] = 'Assinatura verificada a partir de $sender, mas parte do corpo não foi assinado.';
$messages['siginvalid'] = 'Assinatura inválida de $sender.';
$messages['sigunverified'] = 'Assinatura não verificada. Certificado não verificado. ID do certificado: $keyid.';
$messages['signokey'] = 'Assinatura não verificada. Chave pública não encontrada. ID da chave: $keyid.';
$messages['sigerror'] = 'Assinatura não verificada. Erro interno.';
$messages['decryptok'] = 'Mensagem desencriptada.';
$messages['decrypterror'] = 'A desencriptação falhou.';
$messages['decryptnokey'] = 'A desencriptação falhou. Chave privada não encontrada. ID da chave: $keyid.';
$messages['decryptnomdc'] = 'Desencriptação ignorada. A mensagem não está protegida na sua integridade.';
$messages['decryptbadpass'] = 'A desencriptação falhou. Senha inválida.';
$messages['decryptnopass'] = 'A desencriptação falhou. Chave necessária.';
$messages['decryptpartial'] = 'Mensagem desencriptada, mas parte do corpo não foi encriptado.';
$messages['signerror'] = 'A assinatura falhou.';
$messages['signnokey'] = 'A assinatura falhou. Chave privada não encontrada.';
$messages['signbadpass'] = 'A assinatura falhou. Senha inválida.';
$messages['signnopass'] = 'A assinatura falhou. Chave necessária.';
$messages['encrypterror'] = 'A encriptação falhou.';
$messages['encryptnokey'] = 'A encriptação falhou. Chave pública não encontrada para $email.';
$messages['encryptnoprivkey'] = 'A encriptação falhou. A chave privada não foi encontrada.';
$messages['nokeysfound'] = 'Não foram encontradas chaves';
$messages['keynotfound'] = 'Chave não encontrada!';
$messages['keyopenerror'] = 'Não foi possível obter informações sobre a chave! Erro interno.';
$messages['keylisterror'] = 'Não foi possível listar as chaves! Erro interno.';
$messages['keysimportfailed'] = 'Não foi possível importar a(s) chave(s)! Erro interno.';
$messages['keysimportsuccess'] = 'Chave(s) importada(s) com sucesso. Importada: $new, inalterada: $old.';
$messages['keyremoving'] = 'A remover chave(s)...';
$messages['keyremoveconfirm'] = 'Tem a certeza que pretende eliminar a(s) chave(s) selecionada(s)?';
$messages['keyremovesuccess'] = 'Chave(s) eliminada(s) com sucesso.';
$messages['keyremoveerror'] = 'Não foi possível eliminar a(s) chave(s) selecionada(s).';
$messages['keyimporttext'] = 'Pode importar chaves privadas e públicas ou de revogação de assinaturas em formato ASCII-Armor.';
$messages['keyimportsearchtext'] = 'Pode procurar por chaves públicas através de identificadores de chave, nome de utilizador ou endereço de email e, em seguida, importá-las directamente.';
$messages['keystoragenotice'] = 'Todas as chaves públicas e privadas são armazenadas no servidor.';
$messages['formerror'] = 'Por favor, preencha o formulário. Todos os campos são obrigatórios!';
$messages['passwordsdiffer'] = 'As senhas não coincidem!';
$messages['keygenerateerror'] = 'Falha ao gerar o par de chaves';
$messages['keygeneratesuccess'] = 'Foi gerado e importado, com sucesso, um par de chaves.';
$messages['keygennosupport'] = 'O seu navegador não suporta criptografia. Não foi possível gerar um par de chaves!';
$messages['noidentselected'] = 'Tem de seleccionar pelo menos uma identidade para a chave!';
$messages['nonameident'] = 'A identidade deve ter um nome de utilizador definido!';
$labels['newkeysize'] = 'Tamanho da chave';
$labels['key2048'] = '2048 bits - predefinição';
$labels['key4096'] = '4096 bits - mais seguro';
