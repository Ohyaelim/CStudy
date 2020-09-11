/*
    파일명 : 1815330_ex4.c
    문항번호 :과제1_4
    프로그램 설명 : 평을 제곱미터로 환산하기 
    작성자 : 오예림
*/ 
#include<Stdio.h>
#define PTOM 3.3058

int main(void)
{
	int pyeong;
	double m=0;
	
	printf("평을 입력하세요 :");
	scanf("%d",&pyeong);
	
	m=PTOM*pyeong;
	printf("%f평방미터입니다.",m);
	
	return 0; 
}
