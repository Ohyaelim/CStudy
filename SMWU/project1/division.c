/*
    프로그램 설명 : 두 정수를 입력받아 첫번째 정수가 두번째 정수로 
                나누어 떨어지는지  검사하기 
    작성자 : 오예림
*/ 
#include<Stdio.h>

int main(void)
{
	
	int first,second;
	
	printf("첫번째 정수를 입력하세요 :");
	scanf("%d",&first);
	
	printf("두번째 정수를 입력하세요 :");
	scanf("%d",&second);
	
	
	printf(first%second==0 ? "약수입니다." : "약수가 아닙니다.");
	
	return 0;
	
}
