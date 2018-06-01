#include "gameboy.h"

unsigned char loadROM(char *filename) {

	FILE * fp;

	char fullpath[50] = "./gamedir/";
	strcat(fullpath, name);
	fp = fopen(fullpath, "rb");

	fread( (0x100 + memory), sizeof(char), 0x7F00);
}

void emulateCycle() {

}

