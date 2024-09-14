#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double first,second;
    printf("Enter the operator(+,-,*,/):\n");
    scanf("%c",&operator);
    printf("Enter two numbers one by one:\n");
    scanf("%lf %lf", &first,&second);

    switch(operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",first,second,(first + second));
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf", first,second,(first - second));
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf", first,second,(first * second));
            break;
        case '/':
            if(second !=0)
            printf("%.2lf / %.2lf = %.2lf", first,second,(first/second));
            else
                 printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator");

    }
    return 0;
}
