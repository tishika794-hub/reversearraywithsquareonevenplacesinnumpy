#include<stdio.h>
int main(){
	char chr;
	char str[] = {'a','b','c','d','f','\0'};
	printf("enter the character to search:");
	scanf("%c",&chr);
	for(int i=0;i<6;i++){
		if(str[i]==chr){
			printf("character is present in string");
		}
		else{
			continue;
		}
	}
	return 0;
	
}