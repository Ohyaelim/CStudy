/*
   프로그램 내용 : 화씨온도를 섭씨온도로 바꾸기
   작성자 : 오예림
*/


#include<stdio.h>


int main(void)
{
	
	double F,C=0;
	
	printf("화씨온도를 입력하세요:");
	scanf("%lf",&F);
	
	printf("==============================\n");
	
    C=5.0/9.0*(F-32.0);	

	printf("%lf(F)=%lf(C)\n",F,C);
	printf("화씨 %.02f도는 섭씨 %.02f도 입니다.",F,C);
	
	return 0;
	
 } 
    

