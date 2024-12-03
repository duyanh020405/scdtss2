#include <stdio.h>
int main(){
	int k;
	int size;
	printf("nhap size :");
	scanf("%d",&size);
	int arr[size];
	for(int i =0 ; i<size ; i++){
		printf("nhap so thu :[%d]" , i+1);
		scanf("%d",&arr[i]);
	}
	printf("nhap k\n");
	scanf("%d",&k);
	for(int i = 0 ; i<size ; i++){
		for(int l=i+1 ; l<size ; l++){
			if(arr[i] + arr[l]==k){
				printf("mang [%d ,%d]",arr[i] , arr[l]);
			}
		}
	}
}
