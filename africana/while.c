#include <stdio.h>
int main(void)
{
	int j=0;
	while(j<=12)
	{
	printf("integers less than twelve like: %d\n", j);
		j++;
	}

	/*do while loop*/
	int i=0;

	do
	{
	
	
	printf("i will print this before going on and checking with the while loop\n");
	i++;
	}

	while(i<=4);
	{
		printf("bigger than four like: %d\n", i);
		i++;
	}
			return (0);
}
