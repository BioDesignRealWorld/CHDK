#0x30FD
PLATFORMID=12541

PLATFORMOS=vxworks

MEMBASEADDR=0x1900
MEMISOSTART=0xA0B70
ROMBASEADDR=0xffc00000


PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)
