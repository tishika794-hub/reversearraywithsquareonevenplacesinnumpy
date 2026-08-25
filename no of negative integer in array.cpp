#include<stdio.h>
int countodd(int arr[],int n);
int main(){
	int arr[] = {1,2,3,-4,-5};
	printf("no of negative integer are: %d  ",countodd(arr,5));
	return 0;
}
int countodd(int arr[],int n){
	int count =0;
	for(int i = 0;i<n;i++){
		if(arr[i]<0){
			count = count+1;
		}
		else{
			continue;
		}
	}
	return count;
}