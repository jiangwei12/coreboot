
#SB800 CIMx share AGESA V5 lib code
ifneq ($(CONFIG_CPU_AMD_AGESA),y)
 AGESA_ROOT ?= src/vendorcode/amd/agesa/f14
 romstage-y += ../../../../$(AGESA_ROOT)/../common/amdlib.c
 ramstage-y += ../../../../$(AGESA_ROOT)/../common/amdlib.c

 AGESA_INC := -I$(AGESA_ROOT)/ \
	      -I$(AGESA_ROOT)/../common \
	      -I$(AGESA_ROOT)/Include \
	      -I$(AGESA_ROOT)/Proc/IDS/ \
	      -I$(AGESA_ROOT)/Proc/CPU/ \
	      -I$(AGESA_ROOT)/Proc/CPU/Family

 CFLAGS_common += $(AGESA_INC)
endif