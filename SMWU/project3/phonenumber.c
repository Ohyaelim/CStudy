/* 
   프로그램 내용: 연락처 관리 프로그램
*/

#include<stdio.h>
#include<string.h>

typedef struct contact{
	char name[20];
	char tel[20];
}CONTACT;


int main(void){
	CONTACT con[100];
	
	char searchname[20];
	char yorn;
	char put_tel[20];
	int count=0;
	int find=0;
	int i,j;
	
	
	for(i=0;i<100;i++){
		printf("검색할 이름:");
		scanf("%s",searchname);
		count=0;
		find=0;
		
		if (strcmp(searchname,".")==0)
		   break;
		else{
			for(j=0;j<100;j++)
			{
				if(strcmp(searchname,con[j].name)==0)
				{
					count=1;
					break;
				}
				
		    }
			
			if(count==1)
			{
				printf("찾은 전화번호: %s \n\n",con[j].tel);
				find=1;	    
		    }
		    
			if(find==0){
			
				printf("저장되지 않은 연락처입니다.저장하시겠습니까?(Y/N):");
				scanf(" %c",&yorn);
				    if(yorn=='y'){
				    	strcpy(con[i].name,searchname);
					    printf("전화번호 입력:");
					    scanf("%s",put_tel);
					    strcpy(con[i].tel,put_tel);
					    printf("\n");
					    
				    }
					else if(yorn=='n'){
						printf("\n");
						
					}
					else{
						printf("y 또는 n을 입력해주세요\n");
						printf("\n");
					
					} 
				
				}
			}
		}
		 
	return 0;		
}
		
