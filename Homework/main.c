#include"copyloader.h"
int main(int argc, char** argv) {
	char** files = (char**) malloc(sizeof(char*) * 2);
	for (int i = 0; i < 1; i++) {
		files[i] = (char*)malloc(sizeof(char) * 25);
	}
	files[0] = "daewoo.jpg";
	files[1] = "test.csv";
	save("test2.qwerty", 2, files);
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