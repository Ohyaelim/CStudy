#include<stdio.h>

int save(int);
int draw(int);

//예금잔액 전역변수 선언
int balance = 10000;

int main(void) {
	int amount;
 	int menu;

 	while(1) {
 		printf("-------------------------------------------------\n");
		printf(" 1. 입금, 2. 출금, 3. 조회, 4. 종료\n") ;
 		printf("-------------------------------------------------\n");
 		printf("메뉴를 선택하세요: ");
 		scanf("%d", &menu);

 		if(menu == 1) {
 			printf("저축할 금액: ");
 			scanf("%d", &amount);
 			save(amount);
			printf("입금 후 잔액은 %d원입니다. \n", balance);
 		}

 		else if (menu == 2) {
 			printf("인출할 금액: ");
 			scanf("%d", &amount);
 			if (draw(amount) == 0)
				printf("출금 후 잔액은 %d원입니다.\n", balance);
 			
			else {
				printf("잔액이 부족합니다.\n");
 				printf("현재 잔액은 %d원입니다.\n", balance);
 			}
		}

 		else if (menu == 3) {
 			printf("현재 잔액은 %d원입니다.\n", balance);
 		}
 
 		else if (menu == 4) {
 			printf("종료합니다. 이용해주셔서 감사합니다.\n");
 			break;
 		}
 		
		else
 			printf("잘못선택했습니다.1~4를 선택하세요. \n");
 	}
 
 	return 0;
}

int save(int money) {
	balance += money;
	return 0;
}

int draw(int money) {
	if(balance >= money) {
 		balance -= money;
 		return 0;
 	}
 	else
 		return -1;
}
