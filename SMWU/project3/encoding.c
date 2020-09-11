/* 
   프로그램 내용: 메시지 암호화 프로그램 작성하기 
*/

#include <stdio.h>
#include <string.h>


char *encrypt(char*, int);

int main(void) {
   char string[100];
   int shift = 3;
   char result[100];
   printf("문자열: ");
   gets(string);
   
   printf("평 문: ");
   puts(string); 
   
   
   printf("암호문: ");
   strcpy(result,encrypt(string,shift));
   puts(result);

   return 0;
}


char *encrypt(char *str, int shift) {
   
   int i;

   for (i = 0; i < strlen(str); i++) 
   {
      if (isalpha(str[i])!=0)  
      {
         if (str[i] >= 'x') {
            str[i] = str[i]+ shift - 26 ;   
            
         }
         else
            str[i] += shift;
      }
      else {
         continue;
      }
   }
   return str;
}

