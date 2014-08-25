<?php

$user['name'] = 'editor';
$user['pass'] = 'editor';
$editor_role = user_role_load_by_name('editor');
$user['roles'] = array(DRUPAL_AUTHENTICATED_RID => 'authenticated user', $editor_role->rid => $editor_role->name);
$user['status'] = 1;

$saved_user = user_save('', $user);
