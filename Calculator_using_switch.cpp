#include<stdio.h>
#include<conio.h>
main(){

int add ,sub, mul, div,num1,num2,op,result;
add=1;
sub=2;
mul=3;
div=4;

printf("\n SIMPLE CALCULATOR");
printf("\n---------------------------");	
printf("\n Enter %d for Addition",add);	
printf("\n Enter %d for SUBTRACTION",sub);	
printf("\n Enter %d for MULTIPLICATION",mul);	
printf("\n Enter %d for DIVISION",div);
printf("\n----------------------------");

printf("\n Enter First Number : ",num1);
scanf("\n %d",&num1);
printf("\n Enter Second Number: ",num1);
scanf("\n %d",&num2);

printf("\n Enter Operator : ",op);
scanf("\n %d",&op);

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

