#include <stdio.h>
int main(void)
{
	int a,i;
	
	for( a = 1; a <= 10; a++)
		{
		for( i = 1; i <= 10; i++)
			{	
			
				printf("%dx%d = %d \n",a,i,a*i);		
			}
		}
	return 0;
}
