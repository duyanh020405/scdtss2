#include <stdio.h>

int main()
{
   int time =0 ;
   int n;
   printf("nhap so n trong mang \n");
   scanf("%d",&n);
      int arr[n];
   for(int i = 0 ; i< n ; i++){
   	printf("nhap so thu [%d] trong mang\n", i+1);
   	scanf("%d",&arr[i]);
   }
   int number;
   printf("nhap so can tim");
   scanf("%d",&number);
   for(int i = 0 ; i< n ; i++){
   	if(arr[i] == number){
   		time +=1 ;
	   }
   }
   printf(" so lan xuat hien cua %d la %d",number,time);
   
}

