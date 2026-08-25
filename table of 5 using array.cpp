#include<stdio.h>
int main(){
	int arr[10];
	int i;
	for(i=1;i<=10;i++){
		arr[i] = (5*i);
	}
    for(i=1;i<=10;i++){
    	printf("%d",arr[i]);
	}
	return 0;
}