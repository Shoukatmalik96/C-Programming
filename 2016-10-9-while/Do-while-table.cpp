#include<stdio.h>
#include<conio.h>
main()
{
	
int i,n, s,e;
printf("\n Enter no to Print its table :");	
scanf("%d",&n);
printf("\n Enter no to start table  :");
scanf("%d",&s);
printf("\n Enter no to end  table   :");
scanf("%d",&e);
i=s;
do{ 
	
	printf("\n %d X %d = %d",n,i,n*i );
	i++;
}

while(i<=e);
getch();	
	
}
