#include<stdio.h>
#include<conio.h>
main(){

int add ,sub, mul, div,num1,num2,op,result;

printf("\n\t\t SIMPLE CALCULATOR");
printf("\n------------------------------------------------");
printf("\n Enter First Number : ",num1);
scanf("\n %d",&num1);
printf("\n Enter Second Number: ",num1);
scanf("\n %d",&num2);
printf("\n------------------------------------------------");
printf("\n WHAT DO  YOU  WANT ? ");
printf("\n");	
printf("\n PRESS 1 FOR  ADDITION\n");	
printf("\n PRESS 2 FOR  SUBTRACTION\n");	
printf("\n PRESS 3 FOR  MULTIPLICATION\n");	
printf("\n PRESS 4 FOR  DIVISION\n");
printf("\n------------------------------------------------");
printf("\n ENTER YOUR CHOICE : ");
scanf("%d",&op);

switch(op){
 
 case 1:
 {
 result=num1+num2;	
 printf("\n The sum of %d and %d is %d",num1,num2,result);
 break;
 }
case 2:
 {
 result=num1-num2;	
 printf("\n The subtraction of %d and %d is %d",num1,num2,result);
 break;
 }
case 3:
 {
 result=num1*num2;	
 printf("\n The multiplication of %d and %d is %d",num1,num2,result);
 break;
}
case 4:
 {
 result=num1/num2;	
 printf("\n The division of %d and %d is %d",num1,num2,result);
 break;
}
 default :
	
	 printf("\n Invalid Operator");	
		
	



}
}

