#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,l,r,m,n;
clrscr();
printf("how many rows u want:");
scanf("%d",&r);
printf("\n");
for(i=0;i<2*r-1;i++)
{
printf("*");
}
printf("\n");
for(i=2;i<r+1;i++)
{
for(j=0;j<r-i+1;j++)
{
printf("*");

}
for(n=0;n<(2*i)-3;n++)
{
printf(" ");
}
for(m=0;m<r-i+1;m++)
{
printf("*");
}
printf("\n");
}
getch();
}

