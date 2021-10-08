#include<stdio.h>

int findbig(int a,int b)
{
	int big=0;
	
	if(a>b)
	{
		big=a;
	}
	else
	{
		big=b;
	}
	return big;
	//return the biggest no. as the output
}
main()
{
	int a;
	int b;
	int big=0;
	
	printf("enter the value of the a and b:");
	scanf("%d %d",&a,&b);
	
	big=findbig(a,b);
	printf("the biggest number is:%d\n",big);
}
