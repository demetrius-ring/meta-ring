#@TYPE: Machine
#@NAME: Ring Solutions i.MX7D Platform
#@SOC: i.MX7D
#@DESCRIPTION: Machine configuration for Ring Solutions i.MX7D Platform
#@MAINTAIONER: Demetrius Pampouktsis <demetrius.pampouktsis@ring.com>

include conf/machine/include/redsky-default-versions.inc
include conf/machine/include/redsky-default-providers.inc

SOC_FAMILY = "mx7:mx7d"

IMAGE_FSTYPES ?= "tar.gz ext4"

KERNEL_DEVICETREE ?= "imx7d-ring.dtb \
                      imx7d-ring-m4.dtb \
                     "

UBOOT_CONFIG ?= "sd"
UBOOT_CONFIG[sd] = "mx7dsabresd_config,sdcard"
UBOOT_CONFIG[mfgtool] = "mx7dsabresd_config"
