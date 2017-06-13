#include<stdio.h>
void main()
{
int a;
clrscr();
scanf("%d",a);
if(a>0)
{
printf("%d number is positive",a);
}
else if(a<0)
{
printf("%d number is negative",a);
}
else
{
printf("%d number is zero",a);
}
getch();
}
