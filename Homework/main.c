#include"copyloader.h"
int main(int argc, char** argv) {
	char** files = (char**) malloc(sizeof(char*) * 4);
	for (int i = 0; i < 4; i++) {
		files[i] = (char*)malloc(sizeof(char) * 25);
		files[i] = "Salam.txt";
	}
	save("test.rand", 4, files);
	//load("text.rand");
	/*printf("%d\n", FILE_NAME >> 8);
	printf("%d\n", FILE_NAME << 8);*/
	/*int a = 0x0101;
	char c = (a << 0);
	printf("%d\n", a >> 8);
	printf("%d\n", a >> 8);
	printf("%d\n", a);*/
	return 0;
}