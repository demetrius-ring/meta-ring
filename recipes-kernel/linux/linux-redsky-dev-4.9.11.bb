FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}-${PV}:"

require recipes-kernel/linux/linux-redsky.inc

DEPENDS += "lzop-native bc-native"

SRCBRANCH = "imx_4.9.11_1.0.0_ga"
LOCALVERSION = "-1.0.0"
SRCREV = "c27010d99a3d91703ea2d1a3f9630a9dedc3f86f"

DEFAULT_PREFERENCE = "1"

KBUILD_DEFCONFIG_redsky-dev ?= "dev_defconfig"

# TODO: CMDLINE for RedSky
#KERNEL_BOOTCMD = ""
