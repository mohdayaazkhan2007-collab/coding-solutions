//simple calculator using switch case
#include<stdio.h>
int main()
{
char op;
float a, b;
printf("Enter operators(+, -, *, /):");
scanf("%c", &op);
printf("Enter two numbers:");
scanf("%f %f", &a, &b);
switch (op)
{
 case '+':
     printf("result = %.2f\n", a + b);
     break;
 case '-':
    printf("result = %.2f\n", a - b);
    break;

 case '*':
    printf("result = %.2f\n", a * b);
    break;

 case '/':
    printf("result = %.2f\n", a / b);
    break;
}
 return 0;
}
