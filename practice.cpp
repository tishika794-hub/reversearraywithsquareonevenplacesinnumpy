#include<stdio.h>
void change(int* ptr);
void change(int* ptr){
	*ptr = *ptr * 10;
}

int main(){
	int value= 5;
    printf("value of x is: %d\n  ",value);
    change(&value);
    printf("value of x is %d\n : ",value);
	return 0;
}

