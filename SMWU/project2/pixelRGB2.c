#include<stdio.h>

unsigned int red(void);
unsigned int green(void);
unsigned int blue(void);

unsigned int rgb; //전역변수 선언

int main(void) {
	printf("RGB 색상값을 입력하세요(16 진수 8 자리): ");
	scanf("%x", &rgb);
	printf("RGB %X 중 RED = %02X (10 진수 : %d) \n", rgb, red(), red());
	printf("RGB %X 중 GREEN = %02X (10 진수 : %d) \n", rgb, green(), green());
	printf("RGB %X 중 BLUE = %02X (10 진수 : %d) \n", rgb, blue(), blue());
	
	return 0;
}

unsigned int red(void) {
	return (rgb & 0x00ff0000) >> 16;
}
unsigned int green(void) {
	return (rgb & 0x0000ff00) >> 8;
}
unsigned int blue(void) {
	return (rgb & 0x000000ff);
}
