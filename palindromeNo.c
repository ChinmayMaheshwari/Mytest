#include<stdio.h>
void main()

{
int a=0,n,m,f=0;
printf("enter a no");
scanf("%d",&n);
m=n;
while(n!=0)
{
f=n%10;
a=a*10+f;
n=n/10;
}
if (a==m)
{
printf("It Is a Palindrome Number ");
}
else
{
printf("Not a palindrome No.");
}
}
