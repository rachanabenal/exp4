#include<stdio.h>
void main()
{
int a,b;
char op;
printf("Enter an expression:");
scanf("%d%c%d",&a,&op,&b);
switch (op)
{
case'+':
    printf("%d",a+b);
    break;
case'-':
    printf("%d",a-b);
    break;
case'*':
    printf("%d",a*b);
    break;
case'/':
    if(b!=0)
    {
        printf("%d",a/b);
        break;
    }
    else
        printf("division by zero errror");
        break;
default:
    printf("Invalid operator");
}
}
