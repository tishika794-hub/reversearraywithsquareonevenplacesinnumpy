#include<stdio.h>
#include<string.h>
int slice(int str1,int m,int n);
int main(){
	int str1= {'1','2','3','4','5'};
	int m , n;
	printf("value to start slicing:");
	scanf("%d",&m);	
	printf("value to end slicing:");
	scanf("%d",&n);
	printf("sliced string is:",slice(str1,m,n));
	return 0;
	}
slice(str1,m,n){
	int str2 = "";
	for(int i=m;i<=n;i++){
		strcpy(str2,str[i]);
	}
	return str2;
}