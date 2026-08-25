#include<stdio.h>
struct vector{
	int i;
	int j;
};
int sumvector(struct vector v1,struct vector v2);
int main(){
	struct vector v1;
	v1.i = 3;
	v1.j = 8;
	struct vector v2;
	v2.i = 5;
	v2.j = 6;
	printf("sum of two vector is : %d",sumvector(v1,v2));
	return 0;
}
int sumvector(struct vector v1,struct vector v2){
	printf("%di + %dj",v1.i+v2.i,v1.j+v2.j);
}