#include<stdio.h>
void revrse(int arr[],int n);
int main(){
	int n;
	printf("number of element in array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("array in reverse is:",revrse(arr,n);
	return 0;
}
void revre(arr[],int n){
	for(int i=0;i<n/2;i++){
		int firstval = arr[i];
		int secondval = arr[n-i-1];
		arr[i] = secondval;
		arr[n-i-1] = firstval;
	}
}