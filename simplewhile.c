#include <stdio.h>
int main(void)
{
	int i;
	printf("Dwse enan akeraio megalutero h iso apo to 0: ");
	scanf("%d",&i);
	while ( i<0 )
		{
			printf("Evales arnitiko aritmo");
			i = i * -1;
		}
	while ( i == 0 )
		{
			printf("zero");
			i = i + 1;
			
		}
	while ( i % 2 == 0 )
		{
			printf("Even number");
			i = i + 1 ;
		}
	while ( i % 2 == 1 )
		{
			printf("Odd number");
			i = i +1;
		}
	
}
