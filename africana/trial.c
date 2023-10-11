#include <stdio.h>
int main(void)
{
	int i=0;

	for(i=0; i<=99; i++){
	if(i<=9){
	printf("0%d, ", i);
	}else if(i>=10){
	printf("%d, ", i);
	}
	}
	return (0);
}
