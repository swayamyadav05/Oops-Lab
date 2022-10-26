// Write a function to subtract two values of type float and returns the result
#include <stdio.h>
float subtraction(float num1, float num2)
{
    float subtract;
    subtract = num1 - num2;
    return subtract;
}
int main()
{
    float number1, number2, result;
    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter second number: ");
    scanf("%f", &number2);
    result = subtraction(number1, number2);
    printf("\n%f - %f = %0.2f\n", number1, number2, result);
    return 0;
}