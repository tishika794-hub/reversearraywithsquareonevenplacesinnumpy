#include<stdio.h>
int main(){
    int num,i,count_even=0,count_odd=0;
    for(i=0; i<=20; i++){
        printf("enter number to check:");
        scanf("%d", &num);
        if(num%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
        }
    printf("total even and odd numbers are: %d and %d", count_even, count_odd);
    }
