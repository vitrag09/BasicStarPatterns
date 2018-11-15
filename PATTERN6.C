#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,l,r,m,n,p,q;
clrscr();
printf("how many rows u want:");
scanf("%d",&r);
printf("\n");
for(i=0;i<2*r-1;i++)
{
printf("$");
}
printf("\n");
for(i=2;i<r+1;i++)
{
for(j=0;j<r-i+1;j++)
{
printf("$");

}
for(n=0;n<(2*i)-3;n++)
{
printf(" ");
}
for(m=0;m<r-i+1;m++)
{
printf("$");
}
printf("\n");
}
for(k=0;k<r-2;k++)
{
for(l=0;l<k+2;l++)
{
printf("$");
}
for(p=0;p<2*r-2*k-5;p++)
{
printf(" ");
}
for(q=0;q<k+2;q++)
{
printf("$");
}
printf("\n");
}
for(i=0;i<2*r-1;i++)
{
printf("$");
}
getch();
}

