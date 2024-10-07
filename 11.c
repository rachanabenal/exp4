#include<stdio.h>
int main()
{
char c;
printf("Enter a character");
scanf("%c",&c);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='0'||ch=='O'||ch=='u'||ch=='U')
{
    printf("%c is vowel\n",c);
}
else
{
    printf("%c is consonant",c);
}
return 0;
}
