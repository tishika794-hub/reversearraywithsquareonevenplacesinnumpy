#include<stdio.h>
int main(){
	int arr[10] = {6,8,5,3,2,1,4,7,9,10};
	int* ptr = &arr[0];
	printf("value at 3rd position is: %d\n",*(ptr+3));
	return 0;
}