#include<stdio.h>
#include<conio.h>
main(){
int n1,n2,op,start, end ,num ,i,number;
/*variable decleration for factorial */	
printf("\n WHAT DO YOU WANT TO OPERATE ? ");
printf("\n---------------------------------------------------------");
printf("\n PRESS 1 FOR TABLE ");
printf("\n PRESS 2 FOR FACTORIAL ");
printf("\n ENTER YOUR CHOISE :");
scanf(" %d",&op);
switch(op){
case 1: {
printf("\n ENTER NUMBER WANT TO PRINT ITS TABLE :");
scanf("%d",&num);
printf("\n FROM WHERE YOU WANT TO START THE TABEL ? : ");
scanf(" %d",&start);
printf("\n ENTER A RANGE TO END THE TABLE ? : ");
scanf(" %d",&end);	
  for (i =start;i<=end;i++){
  	int result;
  	result =num* i;
  printf("\n %d X %d  = %d ",num, i, result);	
	
  }	
}
break;
case 2:{

    int fact,i,n;
    fact = 1;
	printf("\n---------------------------------------------------------");
	printf("\n\tEnter the number to find its Factorial :");
	scanf("%d" , &n);
   for(i = 1; i <= n; i++)
   {
       fact = fact*i;		
   }
   printf("\n\n");
   printf("\n\t\tFACTORIAL OF %d is %d", n , fact);
   printf("\n---------------------------------------------------------");
	
}break;	
	
	
	
default :
printf("\n INVALID OPTION ");
	
}/*END OF SWITCH */	
	
}/*END OF  MAIN METHOD */
