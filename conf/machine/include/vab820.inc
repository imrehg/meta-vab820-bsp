# Common settings for VAB-820 boards

include conf/machine/include/imx-base.inc
include conf/machine/include/tune-cortexa9.inc

SERIAL_CONSOLE = "115200 ttymxc1"

MACHINE_FEATURES += ""

KERNEL_IMAGETYPE = "uImage"
