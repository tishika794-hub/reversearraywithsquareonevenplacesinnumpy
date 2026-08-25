#include<stdio.h>
int sumrec(int n);
int main(){
	int n;
	printf("enter numer:");
	scanf("%d",&n);
	int sum = sumrec(n);
	printf("sum of numbers are: %d",sum);
	return 0;
}
int sumrec(int n){
	if(n==0){
		return 0;
	}
	else{
		return n + sumrec(n-1);
	}
	
}