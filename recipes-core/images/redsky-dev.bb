DESCRIPTION = ""

require recipes-core/images/core-image-minimal.bb

IMAGE_FEATURES = "tools-debug tools-profile staticdev-pkgs ssh-server-dropbear dev-pkgs dbg-pkgs"

IMAGE_INSTALL = "packagegroup-core-ssh-dropbear \
                 packagegroup-core-buildessential \
                 packagegroup-core-tools-debug \
                 packagegroup-cli-tools "
