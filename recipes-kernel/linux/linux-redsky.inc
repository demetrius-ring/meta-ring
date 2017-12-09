DESCRIPTION = "Linux Kernel for RedSky Platform"
SECTION = "kernel"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

FILESEXTRAPATHS_prepend := "${THISDIR}/linux-redsky:"

inherit kernel fsl-kernel-localversion fsl-vivante-kernel-driver-handler

SRC_URI = "git://source.codeaurora.org/external/imx/linux-imx;protocol=https;branch=${SRCBRANCH} \
           file://imx7d-redsky-m4.dts \
           file://imx7d-redsky.dts \
           file://imx7d-redsky-m4.dtsi \
           file://quectel-devices-4.9.11.patch \
           file://redsky-dts-makefile-4.9.11.patch \
           file://redsky-ethernet-4.9.11.patch \
           file://redsky-spi-gpio-4.9.11.patch \
           "

# Put a local version until we have a true SRCREV to point to
LOCALVERSION ?= ""
SCMVERSION ?= "n"
SRCBRANCH ?= ""

COMPATIBLE_MACHINE = "mx7"

S = "${WORKDIR}/git"

# We need to pass it as param since kernel might support more then one
# machine, with different entry points
KERNEL_EXTRA_ARGS += "LOADADDR=${UBOOT_ENTRYPOINT}"

do_configure_append () {
        cp ${WORKDIR}/imx7d-redsky.dts ${S}/arch/arm/boot/dts/imx7d-redsky.dts
        cp ${WORKDIR}/imx7d-redsky-m4.dts ${S}/arch/arm/boot/dts/imx7d-redsky-m4.dts
        cp ${WORKDIR}/imx7d-redsky-m4.dtsi ${S}/arch/arm/boot/dts/imx7d-redsky-m4.dtsi
}
