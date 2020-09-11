/* 
   프로그램 내용:  이진탐색(binary search) 구현하기 
*/

#include<stdio.h>
#include<stdlib.h>

int binary_search(int *arr,int key);

int main(void){
   int searchkey;
   int i,j,index,temp;
   int arr[20];
   int size=20;
   
   printf("탐색할 키 값을 입력하세요:");
   scanf("%d",&searchkey);
   
   printf("list=[");
   for(i=0;i<size;i++){
      arr[i]=(rand()%99)+1;
      printf(" %d ",arr[i]);
   }
   printf("]\n");
   
   printf("sorted list=[");
   for(i=0;i<size-1;i++){
      index=i;
      for(j=i+1;j<size;j++){
         if(arr[index]>arr[j])
             index=j;
      }
      temp=arr[i];
      arr[i]=arr[index];
      arr[index]=temp;
   }
   for(i=0;i<size;i++){
      printf(" %d ",arr[i]);
   }
   printf("]\n");
   
   if(binary_search(arr,searchkey)!= -1)
   printf("%d는 리스트의 %d번째에 있습니다.\n",searchkey,binary_search(arr,searchkey));
   
   else
   printf("%d는 리스트에 없습니다.",searchkey);

   
   return 0;
} 

int binary_search(int *arr,int key){
   int low=0,high=0,middle=0;
   int i;
   
   low=0;
   high=19;
   
   
  
   
    while(low<=high){
        middle=(low+high)/2;
          
              if(key==arr[middle]){
              	
                  return middle;
                
              }
              else if(key<arr[middle]){
                 high=middle-1;
                 
         
              }
              else if(key>arr[middle]){
                 low=middle+1;
              }
          
          
    
       
      }
   
   return -1;
}
