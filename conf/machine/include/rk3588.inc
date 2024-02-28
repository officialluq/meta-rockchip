# Copyright (c) 2021, Rockchip Electronics Co., Ltd
# Released under the MIT license (see COPYING.MIT for the terms)

require conf/machine/include/rockchip-arm64-common.inc

SOC_FAMILY := "rk3588"

PREFERRED_VERSION_linux-rockchip := "5.10%"

KBUILD_DEFCONFIG := "rockchip_linux_defconfig"

MALI_GPU := "valhall-g610"
MALI_VERSION := "g6p0"

RK_ISP_VERSION := "3.0"
PREFERRED_PROVIDER_trusted-firmware-a = "rockchip-rkbin"
PREFERRED_PROVIDER_optee-os = "rockchip-rkbin"

UBOOT_SUFFIX ?= "itb"
UBOOT_ENTRYPOINT ?= "0x06000000"