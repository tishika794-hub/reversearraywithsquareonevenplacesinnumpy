#include<stdio.h>
int numavg(int a,int b,int c);
int main(){
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d %d %d \n",&a,&b,&c);
	printf("average of three numbers are:");
	numavg(a,b,c);
	return 0;
}
numavg(int a,int b,int c){
	int avg=0;
	avg = (a+b+c)/3;
	printf("%d",avg);
	return 0;
}