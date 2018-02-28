#include<stdio.h>
#include<conio.h>
int main()
{
int a=0,b=1,n=10,c,i;
for(i=0;i<n;i++)
{
	printf("%d\n",a);
c=a+b;
a=b;
b=c;
}
printf("%d\n",c);
getch()
}
