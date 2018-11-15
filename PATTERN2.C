#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,r;
clrscr();
printf("how many rows u want:");
scanf("%d",&r);
printf("\n");
for(i=1;i<r+1;i++)
{
for(j=1;j<i;j++)
{
printf(" ");
}
for(k=2*r-2*i+1;k>0;k--)
{
printf("*");
}
printf("\n");
}
getch();
}