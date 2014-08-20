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
projects[] = file_entity
projects[] = globalredirect
projects[] = google_analytics
projects[] = i18n
projects[] = l10n_update
projects[] = libraries
projects[] = jquery_update
projects[] = link
projects[] = linkit
projects[] = login_destination
projects[] = metatag
projects[media][subdir] = contrib
projects[media][version] = 2.0-alpha3

projects[media_youtube][subdir] = contrib
projects[media_vimeo][subdir] = contrib
projects[media_soundcloud][subdir] = contrib
projects[media_23video][subdir] = contrib


projects[] = pathauto
projects[] = pathologic
projects[] = rules
projects[] = search_api
projects[] = secure_permissions
projects[] = scheduler
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
projects[wysiwyg][patch][] = https://www.drupal.org/files/wysiwyg-ckeditor-4.1853550.136.patch


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

; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.3/ckeditor_4.4.3_full.zip
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][destination] = libraries

libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip
libraries[chosen][directory_name] = chosen
libraries[chosen][destination] = libraries
