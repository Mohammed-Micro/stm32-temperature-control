include makefile.conf

ifneq (,$(DEFINES))
	DEFINES := $(foreach wrd,$(DEFINES),-D$(wrd))
endif
INCLUDES := $(foreach wrd,$(INCLUDES),-I$(wrd))
INFILES  := src/main.c src/startup.s

ifneq (,$(findstring USEGPIODRIVER,$(DEFINES)))
	INFILES := $(INFILES) src/stm32f103_gpio.c
endif

all : proj.hex proj.bin
.PHONY : all
proj.hex : proj.elf
	$(OBJCPY) -O ihex dist/proj.elf dist/proj.hex
proj.elf :
	$(CC) $(LDFLAGS) $(DEFINES) $(ARCHFLAGS) $(INFILES) -o dist/proj.elf $(INCLUDES) -specs=nosys.specs -Xlinker -Map=dist/proj.map
proj.bin : proj.elf
	$(OBJCPY) -O binary dist/proj.elf dist/proj.bin
clean :
	rm -rf dist/*.o dist/*.elf dist/*.map dist/*.hex *.bin
clean-win :
	del /Q dist\*.o dist\*.elf dist\*.map dist\*.hex dist\*.bin 2> nul