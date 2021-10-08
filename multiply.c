#include<stdio.h>

void generatetable(int a)
{
	int b=1;
	int m;
	while(b<=10)
	{
		m=b*a;
		printf("%d*%d=%d\n",a,b,m);
		b++;
	}
	
}
main()
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	
	generatetable(a);
}
