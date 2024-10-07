#include<stdio.h>
void main()
{
float n;
printf("Enter the value of n");
scanf("%f",&n);
if(n>=75)
    printf("distinction");
else if(n>75)
    printf("1st class");
else if(n>59)
    printf("2nd class");
else if(n>49)
    printf("3rd class");
else
    printf("Fail");
}
