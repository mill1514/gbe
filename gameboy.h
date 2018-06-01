
/*
* MEMORY MAP
* 
* $FFFF	Interrupt Enable Flag
* $FF80-$FFFE	Zero Page - 127 bytes
* $FF00-$FF7F	Hardware I/O Registers
* $FEA0-$FEFF	Unusable Memory
* $FE00-$FE9F	OAM - Object Attribute Memory
* $E000-$FDFF	Echo RAM - Reserved, Do Not Use
* $D000-$DFFF	Internal RAM - Bank 1-7 (switchable - CGB only)
* $C000-$CFFF	Internal RAM - Bank 0 (fixed)
* $A000-$BFFF	Cartridge RAM (If Available)
* $9C00-$9FFF	BG Map Data 2
* $9800-$9BFF	BG Map Data 1
* $8000-$97FF	Character RAM
* $4000-$7FFF	Cartridge ROM - Switchable Banks 1-xx
* $0150-$3FFF	Cartridge ROM - Bank 0 (fixed)
* $0100-$014F	Cartridge Header Area
* $0000-$00FF	Restart and Interrupt Vectors
*
**/

unsigned char memory[0xFFFF];







































struct registers {
	struct {
		union {
			struct {
				unsigned char f;
				unsigned char a;
			};
			unsigned short af;
		};
	};
	
	struct {
		union {
			struct {
				unsigned char c;
				unsigned char b;
			};
			unsigned short bc;
		};
	};
	
	struct {
		union {
			struct {
				unsigned char e;
				unsigned char d;
			};
			unsigned short de;
		};
	};
	
	struct {
		union {
			struct {
				unsigned char l;
				unsigned char h;
			};
			unsigned short hl;
		};
	};
	
	unsigned short sp;
	unsigned short pc;
} extern registers;


