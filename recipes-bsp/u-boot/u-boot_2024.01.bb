require u-boot-common.inc
require u-boot.inc

DEPENDS += "bc-native dtc-native python3-pyelftools-native"

do_install:append() {
    bbplain "sdojsdsidis"
    install -m 0777 ${B}/idbloader.img ${DEPLOY_DIR_IMAGE}/
}