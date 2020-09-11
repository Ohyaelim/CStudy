/*
    프로그램 설명 : 사용자가 입력하는 년도가 윤년인지 판단
    작성자 : 오예림
*/ 
#include<Stdio.h>

int main(void)
{
	int year=0;
	
	printf("연도를 입력해주세요(정수4자리) :");
	scanf("%d",&year);
	
	printf("========================================\n");

	printf("%d는",year);
	printf ((year%4==0 && year%100!=0)||(year%400==0)?"윤년입니다.":"윤년이 아닙니다.");
	
	return 0;
 } 
