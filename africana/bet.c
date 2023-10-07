#include <stdio.h>
/*
 *main - This is the entry point of the code Main
 *
 *Return - gives a zero if program is run succesfully
 */
int main(void)
{
	int age;

	printf("enter your age \n");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("you can bet responsibly");
	}
	else if (age < 18)
	{
		printf("you are not legible");
	}
	else if (age < 0)
	{
		printf("not applicable");
	}
	return (0);
}
