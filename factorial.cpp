#include<stdio.h>
int main(){
	int n;int i;
	int fact =1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact = fact*i;
		printf("%d",fact);
	}
	return 0;
}