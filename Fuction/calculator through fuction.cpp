#include<stdio.h>
#include<conio.h>
int add(int a, int b);
int sub(int a,int b);
int mul(int a, int b);
int div(int a, int b);
main(){
int op ,a,b ;
printf("\n Enter value for 1st integer : ");
scanf("%d",&a);	
printf("\n Enter value for 2nd integer : ");
scanf("%d",&b);	


printf("\n\t\tSimple Table ");
printf("\n-------------------------------------------------------------------------");
printf("\n\t");
printf("\n Press 1 for addition         :  ");	
printf("\n Press 2 for subtraction      : ");
printf("\n Press 3 for multiplication   : ");	
printf("\n Press 4 for division         : ");	
printf("\n\t");
printf("\n Enter your Choice : ");
scanf("%d",&op);		
	
switch(op){
{
	case 1 ;
		add(a,b);
		printf("\n The addition of %d & %d is %d ",a,b,c);
		break;
	
	 case 2;
	   sub(a,b);
	   printf("\n The Subtraction of %d & %d is %d ",a,b,c);
	   break;
	   
	  case 3;
		  mult(a,b);
		  printf("\n The multiplication of %d & %d is %d ",a,b,c;
		  break;
	  
	  case 4;
		   div(a,b);
		   printf("\n The division of %d & %d is %d ",a,b,c;
		   break;
	  default:
	       printf("\n Invalid Operator ");
		   	
}
getch();	
	
}

int add(int a, int b){
	
	int c ;
	c = a+b ;
	return c;
}
int sub(int a, int b){
	
	int c ;
	c = a-b ;
	return c;
}
intmult(int a, int b){
	
	int c ;
	c = a*b ;
	return c;
}
int div(int a, int b){
	
	int c ;
	c = a/b ;
	return c;
}
