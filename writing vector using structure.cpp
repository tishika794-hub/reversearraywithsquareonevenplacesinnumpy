#include<stdio.h>
struct vector{
	int i;
	int j;
};
int main(){
	struct vector v1;
	v1.i = 3;
	v1.j = 4;
	printf("vector is: %di + %dj",v1.i,v1.j);
	return 0;
}