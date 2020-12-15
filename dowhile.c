#include <stdio.h>
int main(void)
{
	int i,ath,plithos;
	float mo;
	plithos = 0;
	ath = 0;
	printf("Dwse arithmous: ");
	scanf("%d",&i);
	do
		{	
				plithos = plithos + 1;
				
				ath = ath + i;
			
			
				printf("Dwse arithmous: ");
				scanf("%d",&i);
	
		}
	while( i > 0 && i <100);
	
	mo = ath/plithos;
	
		

	printf("To athrisma ton arithmon einai %d \n",ath);
	printf("To plithos ton arithmon einai %d \n",plithos);
	printf("O M.O. einai %d",mo);
	
	
			
			
	
	
}
