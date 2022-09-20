MODULE = shell_extended

SRC += shell_extended.c

ifneq (,$(filter radio,$(USEMODULE)))
  SRC += se_radio.c
endif

ifneq (,$(filter uniqueid,$(USEMODULE)))
  SRC += se_uniqueid.c
endif

include $(RIOTBASE)/Makefile.base