#include<stdio.h>
int pattern(int n);
int main(){
	printf("pattern is: %d",pattern(5));
	return 0;
}
int pattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(2*i-1);j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}