/*파일명: 1815330오예림_ex5.c
  문항번호:과제2-5
  프로그램 설명: 간단한 영화관 좌석 예약시스템 구현하기 
  작성자: 오예림
*/
#include<stdio.h>

int main(void){
	char y_n;
	int arr[2][10];
	int i,choi;
	
	for(i=0;i<10;i++){
	    arr[0][i]=i+1;
	    arr[1][i]=0;
	}
	while(1){
		printf("좌석을 예약하시겠습니까?(y 또는 n)");
	    scanf(" %c",&y_n);
		if (y_n=='y'){
		    printf("------------------------\n");
		    for(i=0;i<10;i++){
			    printf(" %d ",arr[0][i]);
		    }
		    printf("\n------------------------\n");
		    for(i=0;i<10;i++){
			    printf(" %d ",arr[1][i]);
		    }
		    printf("\n좌석 번호를 입력하세요:");
		    scanf("%d",&choi);
		    if(1<=choi && choi<=10){
		        if (arr[1][choi-1]==1){
			        printf("이미 예약된 자리입니다.\n");
		        }
		        else {
			        arr[1][choi-1]=1;
			        printf("%d번 좌석이 예약되었습니다.\n",choi);
		        }
	        }  
		    else{
		        printf("1부터 10 사이의 번호를 입력하세요.\n");
		    	}
        } 
        else if(y_n=='n'){
        	break;
		}
	
    } 
	return 0;	
	}
	
