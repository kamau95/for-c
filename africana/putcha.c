#include <stdio.h>
#include <string.h>
int main(void)
{
	char greeting[100]="hello world!";
	int i=0;

	for( i=0; i<strlen(greeting); i++){
	putchar(greeting[i]);
	printf("\n");
	}
}
