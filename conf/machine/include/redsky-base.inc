include conf/machine/include/redsky-default-versions.inc
include conf/machine/include/redsky-default-providers.inc

SOC_FAMILY = "mx7"

IMAGE_FSTYPES ?= "tar.gz ext4"

KERNEL_DEVICETREE ?= "imx7d-sdb.dtb \
                      imx7d-sdb-m4.dtb \
                     "
UBOOT_CONFIG ?= "sd"
UBOOT_CONFIG[sd] = "mx7dsabresd_config,sdcard"
UBOOT_CONFIG[emmc] = "mx7dsabresd_config,emmc"
UBOOT_CONFIG[mfgtool] = "mx7dsabresd_config"

#KERNEL_BOOTCMD ?= ""
#KERNEL_IMAGETYPE_UBOOT = ""
#KERNEL_IMAGETYPE_DIRECT = ""
#KERNEL_IMAGETYPE = ""

