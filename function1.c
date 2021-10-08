#include<stdio.h>
//function decleration
void addnum(int a,int b)
{
	int s;
	s=a+b;
	printf("sum of a and b is :%d\n",s);
}

main()
{
	int a;
	int b;
	//input
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	//call the function
	addnum(a,b); //sending the value to the function
	
}
