/*Define function calculateInterest it take principle amount, rate of interest and term value as parameter.
it calculates the simple interest.
Type 3 */
#include<stdio.h>

float calculateinterest(float p,float r,float t)
{
	float interest=0;
	interest=(p*r*t)/100;
	return interest;
	
	
}
main()
{
	float p;
	float t;
	float r;
	float interest=0;
	
	printf("enter the value of principle amount,rate of interest and term value:");
	scanf("%f %f %f",&p,&t,&r);
	
	interest=calculateinterest(p,r,t);
	printf("the simple interest is:%f",interest);
}

