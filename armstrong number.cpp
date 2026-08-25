#include<stdio.h>
int main(){
	int n,org,rem,ch;
	printf("please enter the number:");
	scanf("%d",&n);
	ch = 0;
	org = n;
	while(org != 0){
		rem = org%10;
		ch += rem*rem*rem;
		org /= 10;
	}
	if(ch==n){
		printf("entered number is an armstrong number:");}
	else{
		printf("entrerd number is not armstrong:");
	}
	return 0;
}