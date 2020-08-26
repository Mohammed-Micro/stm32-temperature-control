ENTRY(Reset_Handler)
	

MEMORY
{
	FLASH (rx) : ORIGIN =0x08000000 , LENGTH = 32K
	RAM	  (rwx): ORIGIN = 0x20000000, LENGTH = 6K
}

SECTIONS
{
	
	.isr_vector :
	  {
		. = ALIGN(4);
		KEEP(*(.isr_vector)) /* Startup code */
		. = ALIGN(4);
	  } >FLASH
	.text :
	{
		. = ALIGN(4);
		/*KEEP(*(.isr_vector));*/
		*(.text)
		*(.text*)
		*(.rodata)
		*(.rodata*)
	} > FLASH
	. = ALIGN(4);
	_data_flash_start = .;
	_data_ram_start = ORIGIN(RAM);
	.data : AT(_data_flash_start)
	{
		. = ALIGN(4);
		*(.data)
		*(.data*)
		*(.bss)
		*(.bss*)
		_data_ram_end = .;
	} > RAM
	
	. = ALIGN(4);
	
	_data_sz = SIZEOF(.data);
	. = ORIGIN(RAM) + LENGTH(RAM);
	_sp_start = .;
	
	__bss_start__ = ADDR(.data) + _data_sz;
	
	.bss :
	{
		. = ALIGN(4);
		*(.bss)
		*(.bss*)
	}
	__bss_end__ = .;
}