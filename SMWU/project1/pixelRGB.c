/*
    프로그램 설명 : 픽셀의 색상 값을 16진수로 입력 받아 빨강색 성분만
              추출하여 16진수로 출력하기 
    작성자 : 오예림
*/ 
#include<Stdio.h>

int main(void)
{
	unsigned int pixel;
	unsigned int color,Result;
	const int mask=0x00ff0000;
	
	printf("색상의 픽셀값을 입력하세요(16진수 8자리) :");
	scanf("%08X",&pixel);
	
	
	printf("=======================================\n");
	
	printf("픽셀의 색상 :%08X\n",pixel);
	
	color=pixel&mask;
	
	Result=color>>16;
	
    printf("추출된 빨강색 :%08X",Result);
	
	return 0;
	
	 
}
