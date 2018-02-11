#include<stdio.h>
void main()
{
int total=21,remain,enter,b;
char c;
printf("\n \n\t \t \t  \t INFINTY \n");
printf("\t \t \t  \t ------- \n");
printf("\n(1.) Press ENTER for Playing Game \n");
printf("(2.)Press 2 for Instructions \n");
scanf("%c",&c);
if(c=='2')
{
printf(" (1.)IN THE GAME YOU HAVE 21 STICKS .\n (2.)YOU HAVE CHOISE TO REMOVE STICKS IT MAY 1,2,3 OR 4 NOT MORE THAN 4 .\n (3.)THE INDIVIUAL TO PICK LAST STICK WITH LOSE THE GAME\n");
printf("------------------------------------------------------------------------------\n");
}

while(total>1)
{
printf("\nYour turn......\n");
printf("Please Enter No. of stick You Want To Pick Out \n");
scanf("%d",&enter);
if(enter==1 || enter==2 || enter==3 || enter==4)
{
b=5-enter;
printf("Your Opponent Has taken %d Sticks Out \n",b);
total=total-5;
printf("Remaining sticks = %d \n \n \n",total);
}
else
{
printf("Invalid Input \n Please Try Again");
}
}
printf("You Lose Better Luck Next Time...");
}
