#include<stdio.h>
int main(){
	int i=6;
	int* ptr = &i;
	int** ptr1 = &ptr;
	printf("value of i using pointer to pointer is: %d\n",**ptr1);
	return 0;
}