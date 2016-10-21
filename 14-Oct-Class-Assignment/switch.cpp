#include<stdio.h>
#include<conio.h>
main(){
	
	
int a , b, answer;
char op;

printf(" \n Enter First Number :");
scanf("%d",&a);	

printf(" \n Enter Second Number :");
scanf("%d",&b);
printf("\n what do you want ? ");
printf("\n---------------------------");
printf(" \n 1. + ");
printf(" \n 2. - ");
printf(" \n 3. * ");
printf(" \n 4. / ");
printf("\n---------------------------");
printf("\n Enter your choice : ");
scanf(" %c",&op);
switch(op){
	
case'+': 
{ 
  answer =a+b;
  printf("\n The sum of %d and %d is = %d",a,b,answer);	
  break;
}
case'-': 
{ 
  answer =a-b;
  printf("\n The subtraction of %d and %d is = %d",a,b,answer);	
  break;
}
case'*': 
{ 
  answer =a*b;
  printf("\n The multiplication of %d and %d is = %d",a,b,answer);	
  break;
}
case'/': 
{ 
  answer =a/b;
  printf("\n The division of %d and %d is = %d",a,b,answer);	
  break;
}
case'%': 
{ 
  answer =a%b;
  printf("\n The remainder of %d and %d is = %d",a,b,answer);	
  break;
  
  
}
default : 
{ 
  
  printf("\n Invalid OPerator");	
  break;
}
/*end of switch */

getch();
} 
/*end of main*/



