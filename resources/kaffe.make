core = 7.x
api = 2

defaults[projects][subdir] = "contrib"

; Just get the latest core. Patch it yourself if you must!
projects[] = drupal

projects[] = advagg
projects[] = apc
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.x-dev
projects[] = admin_views
projects[] = chosen
projects[] = ctools
projects[] = date
projects[] = ds
projects[] = entity
projects[] = entityreference
projects[] = features
projects[] = field_collection
projects[] = field_group
projects[file_entity][subdir] = contrib
projects[file_entity][version] = 2.0-alpha3

projects[] = globalredirect
projects[] = google_analytics
projects[] = i18n
projects[] = l10n_update
projects[] = libraries
projects[] = jquery_update
projects[] = link
projects[] = linkit
projects[] = login_destination

projects[manual-crop][type] = module
projects[manual-crop][subdir] = contrib
projects[manual-crop][download][type] = git
projects[manual-crop][download][revision] = 332ffccb9f2492d689a77c75ef7c82432cd75281

libraries[imagesloaded][download][type] = get
libraries[imagesloaded][download][url] = https://github.com/desandro/imagesloaded/archive/v2.1.2.tar.gz
libraries[imagesloaded][directory_name] = jquery.imagesloaded
libraries[imagesloaded][destination] = libraries

libraries[imgareaselect][download][type] = get
libraries[imgareaselect][download][url] = http://odyniec.net/projects/imgareaselect/jquery.imgareaselect-0.9.10.zip
libraries[imgareaselect][directory_name] = jquery.imgareaselect
libraries[imgareaselect][destination] = libraries

projects[] = metatag
projects[media][subdir] = contrib
projects[media][version] = 2.0-alpha3

projects[media_youtube][subdir] = contrib
projects[media_vimeo][subdir] = contrib
projects[media_soundcloud][subdir] = contrib
projects[media_23video][subdir] = contrib

projects[] = node_clone
projects[] = node_clone_tab

projects[] = pathauto
projects[] = pathologic
projects[] = rules
projects[] = search_api

projects[secure_permissions][subdir] = contrib
projects[secure_permissions][version] = 1.6
projects[secure_permissions][patch][] = https://www.drupal.org/files/issues/2188491-features-multilingual-2.patch
projects[secure_permissions][patch][] = https://www.drupal.org/files/secure_permissions-duplicate_role_exception-1744274-4.patch

projects[] = scheduler
projects[] = smart_trim
projects[] = strongarm
projects[] = token
projects[] = transliteration
projects[] = variable
projects[] = views
projects[] = views_bulk_operations
projects[] = xmlsitemap
projects[] = webform

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2
;projects[wysiwyg][patch][] = https://www.drupal.org/files/wysiwyg-ckeditor-4.1853550.136.patch
; The above patch is against dev. Here is one rerolled to 2.2
projects[wysiwyg][patch][] = https://www.drupal.org/files/wysiwyg-ckeditor-4.1853550.172-do-not-test.patch



; Development related modules
projects[devel][subdir] = development
projects[diff][subdir] = development
projects[environment_indicator][subdir] = development
projects[environment_indicator][version] = 2.x-dev
projects[stage_file_proxy][subdir] = development
projects[masquerade][subdir] = development
projects[module_filter][subdir] = development
projects[devel_themer][subdir] = development
projects[livereload][subdir] = development
projects[ultimate_cron][subdir] = development

; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.2/ckeditor_3.6.6.2.zip
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][destination] = libraries

libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip
libraries[chosen][directory_name] = chosen
libraries[chosen][destination] = libraries
