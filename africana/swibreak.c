#include <stdio.h>

int main(void)
{
	char grade;

	printf("enter your grade\n");
	scanf("%c", &grade);
	switch(grade)
	{
		case 'A':
			printf("congratulations\n");
			break;
		case 'B':
			printf("keep up\n");
			break;
		case 'C':
			printf("average\n");
			break;
		default:
			printf("you have failed\n");
	
	}



	return(0);
}
