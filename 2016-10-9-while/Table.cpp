#include<stdio.h>
#include<conio.h>
main(){
	
int s,e,n,i;
n=10;


printf("\n Enter no to print table   :");
scanf("%d",&n);
printf("\n Enter start point of table   :");
scanf("%d",&s);
printf("\n Enter no to end point of  table   :");
scanf("%d",&e);
i=s;
while(i<=e)
{
	printf("\n %d X %d=%d",n,i,n*i);
	i++;
}	
	
	
}
