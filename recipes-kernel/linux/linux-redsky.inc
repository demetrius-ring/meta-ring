DESCRIPTION = "Linux Kernel for RedSky Platform"
SECTION = "kernel"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

inherit kernel fsl-kernel-localversion fsl-vivante-kernel-driver-handler

SRC_URI = "git://source.codeaurora.org/external/imx/linux-imx;protocol=https;branch=${SRCBRANCH} \
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
