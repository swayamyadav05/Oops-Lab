// Write a function to add two values of type integer and returns the result
#include <stdio.h>
int addition(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
int main()
{
    int number1, number2, result;
    printf("Enter first integer: ");
    scanf("%d", &number1);
    printf("Enter second integer: ");
    scanf("%d", &number2);
    result = addition(number1, number2);
    printf("\n%d + %d = %d\n", number1, number2, result);
    return 0;
}