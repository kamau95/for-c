#include <stdio.h>
int main(void)
{
	int i;
	int j;

	for(i=0; i<=4; i++)
	{
	printf("start of the outer loop\n");
	for(j=0; j<=10; j++)
	{ 
	printf("inner loop\n");
	}
	printf("end of the outer loop\n");
	}
return (0);
}
