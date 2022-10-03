APPLICATION = storage
BOARD ?= native

include ../Makefile.common

DEVHELP ?= 1

USEMODULE += shell
USEMODULE += shell_commands
USEMODULE += ps

USEMODULE += mtd_flashpage
USEMODULE += mtd_write_page

CFLAGS += -Wno-unused-function
CFLAGS += -Wno-unused-variable

include $(RIOTBASE)/Makefile.include