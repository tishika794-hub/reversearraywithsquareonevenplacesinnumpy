#include<stdio.h>
int main(){
	int i = 5;
	int *ptr;
	ptr = &i;
	*ptr = *ptr*10;
	printf("%d",*ptr);
	return 0;
}