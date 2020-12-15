#include <stdio.h>
int main(void)
{
	int i;
	printf("Dwse enan akeraio megalutero h iso apo to 0: ");
	scanf("%d",&i);
	if ( i<0 )
		{
			printf("Evales arnitiko aritmo");
			
		}
	else if ( i == 0 )
		{
			printf("zero");
		}
	else if ( i % 2 == 0 )
		{
			printf("Even number");
			
		}
	else 
		{
			printf("Odd number");
		}
	
}

