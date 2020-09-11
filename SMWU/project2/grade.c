/*
  프로그램 설명:학생들의 시험점수를 통계처리하기 
  작성자: 오예림
*/

#include<stdio.h>
#include<stdlib.h>
#define STUDENT 10
int main(void)
{ 
	int test[10][4];
	int score_1[STUDENT]={0};
	int score_2[STUDENT]={0};
	int score_3[STUDENT]={0};
	int i,j,index,temp;
	
	printf(" 학번   시험1   시험2   시험3  \n");
	printf("-------------------------------\n");
	

	for(i=0;i<STUDENT;i++){
		
		test[i][0]=i+1;
		test[i][1]=(rand()%100)+1;
		test[i][2]=(rand()%100)+1;
		test[i][3]=(rand()%100)+1;
	    printf(" %2d\t  %2d\t  %2d\t  %2d\n",test[i][0],test[i][1],test[i][2],test[i][3]);    
	}
		printf("-------------------------------\n");
	
	for (i=0;i<STUDENT;i++){
		score_1[i]=test[i][1];
		score_2[i]=test[i][2];
		score_3[i]=test[i][3];
	}
	for(i=0;i<STUDENT-1;i++){
		index=i;
		for(j=i+1;j<STUDENT;j++){
			if(score_1[index]>score_1[j])
			    index=j;
		}
		temp=score_1[i];
		score_1[i]=score_1[index];
		
		score_1[index]=temp;
	}
	for(i=0;i<STUDENT-1;i++){
		index=i;
		for(j=i+1;j<STUDENT;j++){
			if(score_2[index]>score_2[j])
			    index=j;
		}
		temp=score_2[i];
		score_2[i]=score_2[index];
		
		score_2[index]=temp;
	}
	for(i=0;i<STUDENT-1;i++){
		index=i;
		for(j=i+1;j<STUDENT;j++){
			if(score_3[index]>score_3[j])
			    index=j;
		}
		temp=score_1[i];
		score_3[i]=score_3[index];
		
		score_3[index]=temp;
	}
	printf("최고:\t  %2d\t  %2d\t  %2d\n",score_1[9],score_2[9],score_3[9]);
	printf("최저:\t  %2d\t  %2d\t  %2d\n",score_1[0],score_2[0],score_3[0]);
	

	
	return 0;
}
