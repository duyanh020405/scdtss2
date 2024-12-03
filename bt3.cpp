#include <stdio.h>

int main()
{
  int time =0 ;
   int n;
   printf("nhap so n trong mang \n");
   scanf("%d",&n);
      int arr[n];
      int arr2[n];
   for(int i = 0 ; i< n ; i++){
   	printf("nhap so thu [%d] trong mang\n", i+1);
   	scanf("%d",&arr[i]);
   }
   for (int i = 0; i < n; i++) {
    arr2[n - 1 - i] = arr[i]; 
}

   printf("Mang cu: ");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
printf("\n");

printf("Mang moi (dao nguoc): ");
for (int i = 0; i < n; i++) {
    printf("%d ", arr2[i]);
}
printf("\n");

}

