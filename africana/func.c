#include <stdio.h>
/*functio to calc percentage*/
int calcpercent(int num1, int num2, int num3);
int main(void)
{
	int perfomance= calcpercent(4, 8, 100);
	printf("your perfomance is: %d", perfomance);
	return(0);
}
/*function definition*/
int calcpercent(int num1, int num2, int num3)
{
int percent= (num1*num3)/num2;
	return(percent);
}
