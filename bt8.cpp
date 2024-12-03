#include <stdio.h>
int main(){
	int size;
	int sum;
	int sumarr;
	int pes;
	printf("nhap size :");
	scanf("%d",&size);
	int arr[size];
	for(int i =0 ; i<size-1 ; i++){
		printf("nhap so thu [%d] :" , i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	sumarr =size*(size+1)/2;
	pes=sumarr-sum;
	printf("so con thieu : %d",pes);
	
	
}
