HOMEPAGE = "http://www.denx.de/wiki/U-Boot/WebHome"
DESCRIPTION = "U-Boot, a boot loader for Embedded boards based on PowerPC, \
ARM, MIPS and several other processors, which can be installed in a boot \
ROM and used to initialize and test the hardware or to download and run \
application code."
SECTION = "bootloaders"
DEPENDS += "flex-native bison-native python3-setuptools-native"

LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=2ca5f2c35c8cc335f0a19756634782f1"
PE = "1"

# We use the revision in order to avoid having to fetch it from the
# repo during parse
SRCREV = "2a58476bf396e2f9e663dc9005b697119a54610a"

SRC_URI = "git://github.com/officialluq/u-boot.git;protocol=https;branch=master"

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

inherit pkgconfig

do_configure[cleandirs] = "${B}"
