#include<stdio.h>
#include<conio.h>
main(){

int num,check_number,i;

printf("\n Enter any number: ");
scanf("%d",&num);
check_number=num%2;
if(check_number==0){
   printf("\n Even Number");                   
for( i=num; i<=20;i+=2){
        printf("\n%d",i);
}
}
      else
{
 printf("\n Odd Number"); 
 for( i=num; i<=20;i+=2){
         printf("\n %d",i);
}     
}     
       
       
 getch();      
       
}
