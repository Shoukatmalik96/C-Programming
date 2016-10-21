#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
main()
{
	
int a,b,c;
char op;
printf("\n Enter First Number :");
scanf(" %d",&a);
printf("\n Enter Second Number :");
scanf(" %d",&b);
printf("\n What do you want to do ? ");
printf("\n--------------------------------");
printf("\n 1 . + ");
printf("\n 2 . - ");
printf("\n 3 . * ");
printf("\n 4 . /");
printf("\n Enter your choice :");
scanf("%d",&op);

   switch(op)
   {
      case '+':
      {
	  
       add( 2,3);
       printf(" \n The sum of %d & % d is = %d", a,b,c);
       break;
      }
             case '-':
             {
             sub( 2,3);
             printf(" \n The subtraction of %d & % d is = %d", a,b,c);
             break;
             }
             
                   case '*':
                   {
                   mult( 2,3);
                   printf(" \n The multiplication of %d & % d is = %d", a,b,c);
                   break;
                   }
                      
                        case '/':
                       {
                       div( 2,3);
                       printf(" \n The division of %d & % d is = %d", a,b,c);
                       break;
                       }

                           deafult :
                           printf("\n Invalid Operator ");	
                           break;	
  }/*  End of switch statment*/

getch();

}/*  End of main */

int add(int a,int b){
int c ;
c= a+b;
return  c ;	
	
}
int sub(int a,int b){
int c ;
c= a-b;
return c;	
	
}
int mult(int a,int b){
int c ;
c= a*b;
return c;	
	
}
int div(int a,int b){
int c ;
c= a/b;
return c;	
	
}

