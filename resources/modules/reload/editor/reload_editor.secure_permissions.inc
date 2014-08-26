<?php
/**
 * @file Secure Permissions Data
 * Module file for secure permissions in code.
 */

/**
 * Define site roles in code.
 *
 * Create a secure_permissions_data module directory and place this function
 * in secure_permissions_data.module.
 *
 * @return
 *   An array defining all the roles for the site.
 */
function reload_editor_secure_permissions_roles() {
  return array(
    'anonymous user',
    'authenticated user',
    'editor',
  );
}

/**
 * Define site permissions in code.
 *
 * Create a secure_permissions_data module directory and place this function
 * in secure_permissions_data.module.
 *
 * @param $role
 *   The role for which the permissions are being requested.
 *
 * @return
 *   An array defining all the permissions for the site.
 */
function reload_editor_secure_permissions($role) {
  $permissions = array(
    'anonymous user' => array(
      'access content',
      'view files',
    ),
    'authenticated user' => array(
      'access content',
      'use text format filtered_html',
      'view files',
    ),
    'editor' => array(
      'access administration menu',
      'access administration pages',
      'access content overview',
      'access environment indicator',
      'access user profiles',
      'administer files',
      'administer nodes',
      'create article content',
      'create files',
      'create url aliases',
      'delete own article content',
      'delete own audio files',
      'delete own image files',
      'delete own video files',
      'download any audio files',
      'download any video files',
      'download own audio files',
      'download own image files',
      'download own video files',
      'edit any image files',
      'edit own article content',
      'edit own audio files',
      'edit own image files',
      'edit own video files',
      'schedule (un)publishing of nodes',
      'use text format filtered_html',
      'use text format rich_text',
      'view own files',
      'view own private files',
      'view private files',
      'view the administration theme',
    ),
  );
  if (isset($permissions[$role])) {
    return $permissions[$role];
  }
}
