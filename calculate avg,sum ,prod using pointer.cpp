#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    int sum, product;
    float average;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter the first number: ");
    scanf("%d", ptr1); 

    printf("Enter the second number: ");
    scanf("%d", ptr2); 
    sum = *ptr1 + *ptr2;
    product = (*ptr1) * (*ptr2);
    average = (float)sum / 2; 
    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Product: %d\n", product);

    return 0;
}