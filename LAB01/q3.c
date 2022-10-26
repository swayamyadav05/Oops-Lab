// Write a function to multiply two values of type int &amp; double and returns the Result
#include <stdio.h>
double mul(int num1, double num2)
{
    double multiply;
    multiply = num1 * num2;
    return multiply;
}
int main()
{
    int number1;
    double number2;
    scanf("%d %lf", &number1, &number2);
    double result;
    result = mul(number1, number2);
    printf("The result is: %lf\n",result);
}