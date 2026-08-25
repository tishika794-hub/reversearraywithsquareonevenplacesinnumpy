#include<stdio.h>
int main(){
	int a,b,c;
	a=4;
	b=5;
	c=6;
	if(a>b){
		if(a>c){
			printf("a is greatest");
		}
		else{
			printf("c is greatest");
		}
	}
	else if(b>a){
		if(b>c){
			printf("b is greatest");
		}
		else{
			printf("c is greatest");
		}
	}
	return 0;
}