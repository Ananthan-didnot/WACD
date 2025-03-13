/*
Write a C program that defines a function multiply()
which takes two integers as parameters and returns their product.
Call this function in main() and display the result.
*/

#include <stdio.h>

int multiply(int, int);

int main()
{
    int num1, num2, product;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    product = multiply(num1, num2);
    printf("Product = %d ", product);

    return 0;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}