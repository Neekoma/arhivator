#include "copyloader.h"

bool save(char* filename, uint8_t count, char** files) {
	if (count > 0) {
		FILE* file = fopen(filename, "wb+");
		putc(count, file);
		for(uint8_t i = 0; i < count; i++){
			putc(FILE_NAME, file);
			putc(FILE_NAME >> 8, file);
			for (int j = 0; j < strlen(files[i]); j++) {
				putc(files[i][j], file);
			}
			putc(FILE_START, file);
			putc(FILE_START >> 8, file);
			FILE* input = fopen(files[i], "rb");
			char c;
			while ((c = getc(input)) != EOF) {
				putc(c, file);
			}
			fclose(input);
		}
		
		fclose(file);
	}
	else {
		printf("There are no files to write...");
	}
}

void* load(char* filename) {
	FILE* file = fopen(filename, "rb+");
	
	fclose(file);
}
