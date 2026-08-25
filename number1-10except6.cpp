#include<stdio.h>
int main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int fact = 1;
	int i;
	for(i=1;i<=n;i++){
		fact = fact*i;
	}
	printf("%d",fact);
	return 0;
}