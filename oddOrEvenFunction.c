/*
Write a C function named isEven() that takes an
integer as input and returns 1 if the number is even, otherwise returns 0.
Use this function in main() to check whether a given number is even or odd.
*/
#include <stdio.h>

int isEven(int);

int main()
{

    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result = isEven(num);
    if (result == 1)
    {
        printf("%d is an Even", num);
    }
    else
    {
        printf("%d is an Odd", num);
    }

    return 0;
}

int isEven(int num)
{
    return (num % 2 == 0);
}
