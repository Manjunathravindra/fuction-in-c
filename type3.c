#include<stdio.h>

int addnum(int a,int b)
{
	int s=0;
	s=a+b;
	return s;
}
main()
{
	int a;
	int b;
	int s=0;
	
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	
	s=addnum(a,b);
	printf("the sum of a and b is:%d\n",s);
	
}
