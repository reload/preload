<?php

// Create a default role for site administrators, with all available permissions assigned.
$admin_role = new stdClass();
$admin_role->name = 'administrator';
$admin_role->weight = 2;
user_role_save($admin_role);
user_role_grant_permissions($admin_role->rid, array_keys(module_invoke_all('permission')));
// Set this as the administrator role.
variable_set('user_admin_role', $admin_role->rid);
