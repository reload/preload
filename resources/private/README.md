# Private folder

This folder is protected by Apache and cannot be accessed via the
webserver.

Use this to place non-public files that must be part of the
repository.

The folder was chosen because this is the only protected part in
Pantheons nginx configuration and we might as well standardize on
that.

Be sure to add it to the `nginx` configuration if you host the site
with nginx elsewhere:

    location /private {
      deny all;
      return 404;
    }
