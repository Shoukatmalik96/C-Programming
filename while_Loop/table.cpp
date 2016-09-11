#include<stdio.h>
#include<conio.h>
main()
{
	
	int start,end,num,i;
	printf("\n Enter any number to print its number :");
	scanf("%d",&num);
    printf("\n Enter number to start table :");
	scanf("%d",&start);
	printf("\n Enter number to end table :");
	scanf("%d",&end);
	
	i=start;
	do{
		printf("\n %d x %d =%d",num,i,num*start);
    	i++;
	}
	while(i<=end)
	getch();	
			
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
