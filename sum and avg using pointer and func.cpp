#include<stdio.h>
int calc(int *a,int *b);
int main(){
	int x = 5;
	int y = 6;
	int *a,*b
    int a= &x;
    int b= &y;
	int k= calc(*x,*y);
	printf("sum and average are: %d",k);
	return 0;
}
int calc(int *a,int *b){
	int sum =0;
	sum = *a + *b;
	avg = (*a + *b)/2;
	printf("%d %d",sum,avg);
	return 0;
}