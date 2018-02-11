#include<stdio.h>
#include<ctype.h>
void main()
{
char c;
printf("Enter a Character  \n");
scanf("%c",&c);
if(isalpha(c)>0)
{
if(isupper(c)>0)
{
printf("The character is an Capital Alpbhabet  ");
}
else
{
printf("The character is a Small Alphabet");
}
}
else
{
if (isdigit(c)>0)
{
printf("The character is a Digit");
}
else
{
printf("The character is a Special Character");
}
}
}

