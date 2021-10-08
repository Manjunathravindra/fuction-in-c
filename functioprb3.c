#include<stdio.h>

void findbig(int a,int b);

main()
{
 int a;
 int b;
 
 printf("enter the value of a and b:");
 scanf("%d %d",&a,&b);
 
 findbig(a,b);	
}

void findbig(int a,int b)
{
	if(a>b)
	{
		printf("%d is a biggest number\n",a);
	}
	else
	{
		printf("%d is a biggest number\n",b);
	}
}
