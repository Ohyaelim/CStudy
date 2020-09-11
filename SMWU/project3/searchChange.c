/* 
   프로그램 내용: 간단한 “찾아바꾸기” 기능 구현하기. 
*/


#include<stdio.h>
#include<string.h>

char *replaceStr(char*,char*,char*);
char result[100];

int main(void){
	char str[80];
	char find[80];
	char change[80];
	char resultStr[100];
	
	
	printf("문자열을 입력하세요: ");
	gets(str);
	
	printf("찾을 문자열: ");
	gets(find);
	
	printf("바꿀 문자열: ");
	gets(change);
	

	printf("찾아바꾸기 결과: %s",replaceStr(str,find,change));
	
	return 0;
} 

char* replaceStr (char* str, char* find, char* change)
{
   
   char *ptr= strtok(str," "); 
   
   while (ptr != NULL){
      if(strcmp(ptr,find)==0)
         strcat(result, change);
      
      else
         strcat(result, ptr);
      
      ptr = strtok(NULL, " ");
      strcat(result," ");
   }
   return result;
}
