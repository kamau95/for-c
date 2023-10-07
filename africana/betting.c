#include <stdio.h>
/*
 * main - main function entry point.
 * Return - returns 0(success).
 */
int main(void)
{
	int age;

	printf("enter your age");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("bet responsibly");
	}
	else
	{
	if (age < 18)
		printf("you are not allowed to bet");
	}
	return (0);
	}
