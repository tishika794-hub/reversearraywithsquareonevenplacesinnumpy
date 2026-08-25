#include <stdio.h>
void swap(int *x, int *y) {
    int temp; 

    temp = *x;  
    *x = *y;    
    *y = temp;  
}

int main() {
    int num1, num2;

    printf("Enter value of num1: ");
    scanf("%d", &num1); 
    printf("Enter value of num2: ");
    scanf("%d", &num2); 

    
    printf("Before Swapping: num1 is: %d, num2 is: %d\n", num1, num2);


    swap(&num1, &num2);
    printf("After Swapping: num1 is: %d, num2 is: %d\n", num1, num2);

    return 0;
}