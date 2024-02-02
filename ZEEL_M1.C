#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();
printf("enter your choice:-");
scanf("%c",&n);
if((n>='A' && n<='Z')||(n>='a' && n<='z'))
{
 printf("your choice is alphabet");
}
else if(n>=0 && n<=9)
{
 printf("your choice is number");
}
else
{
 printf("your choice is special character");
}
getch();

}