core = 7.x
api = 2

defaults[projects][subdir] = "contrib"

; Just get the latest core. Patch it yourself if you must!
projects[] = drupal

projects[] = admin_views
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
projects[] = i18n
projects[] = l10n_update
projects[] = libraries
projects[] = jquery_update
projects[] = link
projects[] = linkit
projects[] = metatag
projects[] = media
projects[] = pathauto
projects[] = pathologic
projects[] = rules
projects[] = search_api
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
projects[] = devel
projects[] = diff
projects[] = environment_indicator
projects[] = stage_file_proxy


; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.3/ckeditor_4.4.3_full.zip
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][destination] = libraries

