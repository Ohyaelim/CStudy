/*
  프로그램 설명: 알파고와 가위바위보게임 
  작성자: 오예림
*/

#include<stdio.h>
#include<stdlib.h> 
#include<time.h>

int main(void){
	int choice,alpago=0,alpawin=0,youwin=0;
	
	srand(time(NULL));
	 
	do{
	    printf("당신의 선택은 무엇입니까?(1.가위, 2.바위, 3.보):");
	    scanf("%d",&choice);
	    alpago=(rand()%3)+1;
		
		switch(choice){
			case 1: 
				if (alpago==1){
				    printf("당신은 가위를 냈습니다. 알파고는 가위를 냈습니다.\n");
				    printf("비겼습니다.\n");
				    printf("===============================\n");
				    break;
				}
				else if(alpago==2){
				    printf("당신은 가위를 냈습니다. 알파고는 바위를 냈습니다.\n");
				    alpawin+=1;
				    printf("알파고가 이겼습니다.%d승\n",alpawin); 
			   	    printf("===============================\n");
			   	    break;
			    }
			    else if(alpago==3){
				    printf("당신은 가위를 냈습니다. 알파고는 보를 냈습니다.\n");
			     	youwin+=1;
				    printf("당신이 이겼습니다.%d승\n",youwin);
				    printf("===============================\n");
				    break;
				    }
			case 2:
				if (alpago==2){
				    printf("당신은 바위를 냈습니다. 알파고는 바위를 냈습니다.\n");
				    printf("비겼습니다.\n");
				    printf("===============================\n");
				    break;
				}
				else if(alpago==3){
				    printf("당신은 바위를 냈습니다. 알파고는 보를 냈습니다.\n");
				    alpawin+=1;
				    printf("알파고가 이겼습니다.%d승\n",alpawin); 
			   	    printf("===============================\n");
			   	    break;
			    }
			    else if(alpago==1){
				    printf("당신은 바위를 냈습니다. 알파고는 가위를 냈습니다.\n");
			     	youwin+=1;
				    printf("당신이 이겼습니다.%d승\n",youwin);
				    printf("===============================\n");
				    break;
				    }
			case 3: 
			    if (alpago==3){
				    printf("당신은 보를 냈습니다. 알파고는 보를 냈습니다.\n");
				    printf("비겼습니다.\n");
				    printf("===============================\n");
				    break;
				}
				else if(alpago==1){
				    printf("당신은 보를 냈습니다. 알파고는 가위를 냈습니다.\n");
				    alpawin+=1;
				    printf("알파고가 이겼습니다.%d승\n",alpawin); 
			   	    printf("===============================\n");
			   	    break;
			    }
			    else if(alpago==2){
				    printf("당신은 보를 냈습니다. 알파고는 바위를 냈습니다.\n");
			     	youwin+=1;
				    printf("당신이 이겼습니다.%d승\n",youwin);
				    printf("===============================\n");
				    break;
				    }
			default:
				printf("잘못선택했습니다.\n");
				printf("===============================\n");
				    break;
	            
			}	
	}
	while(alpawin<2 && youwin<2);
	
	if (alpawin==2){
		printf("알파고의 승리입니다.\n종료합니다.");
	}
	else if(youwin==2) {
		printf("당신의 승리입니다.\n종료합니다.");
	}
	return 0;
}
