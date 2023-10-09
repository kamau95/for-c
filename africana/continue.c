#include <stdio.h>
int main(void)
{
	int i=0;
	int j=1;
	int k=1;

	for(i=0; i<=5; i++)
	{
	printf("mangoes in the bag:%d\n", i);
	}

	/*after evaluating once it breaks out of the loop*/

	for(j=1; j<=8; j++)
	{
	if(j==4)
	{
	break;
	}
	printf("the number of absentees is:%d\n", j);
	}

	/*using the continue statement*/
	for(k=1; k<=4; k++)
	{
	if(k==2)
	{
	continue;
	}	
	printf("present students %d\n", k);
	}
	return(0);
}
