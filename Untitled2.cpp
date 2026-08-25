#include<stdio.h>
void swapnum(int*a ,int*b);
int main(){
	int c,d;
	printf("enter value of numbers:");
	scanf("%d %d /n",&c,&d);
	printf("swaped numers are:");
	swapnum(&c,&d);
	printf("swap no1 %d,swap no2 %d/n",c,d);
}
void swapnum(int*a,int*b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}