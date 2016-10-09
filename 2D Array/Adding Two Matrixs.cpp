#include<stdio.h>
#include<conio.h>
main(){
	
	
int a[10][10],b[10][10],i,j,c[10][10],choice;	
  printf("\n\tENTER VALUES OF FOR FIRST MATRIX \n\n\n");
  for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("\n Enter Value of a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
        }
   }
   printf("\n");   
  printf("\n\tENTER VALUES OF FOR SECOND MATRIX \n\n\n");
  for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        	printf("\n Enter Value of b[%d][%d]: ",i,j);
        scanf("%d",&b[i][j]);
        }
   }
   printf("\n\n");
  printf("\n\tGIVEN MATRIX A\n");
  printf("\n--------------------------------");
  for(i=0;i<2;i++){
        printf("\n\n");
        for(j=0;j<2;j++){
        printf("%d\t",a[i][j]);
        }
  }
   printf("\n\n");
   printf("\n\tGIVEN MATRIX B\n");
   printf("\n---------------------------------");
  for(i=0;i<2;i++){
        printf("\n\n");
        for(j=0;j<2;j++){
        printf("%d\t",b[i][j]);
        }
   }
   printf("\n\n\n");
   /*
   The addition of matrix A & B is 
   */
   
printf("\n SELECT YOUR CHOICE\n");
printf("\n-------------------------------------");
printf("\n ***|ENTER 1 FOR ADDITION|*** \n");
printf("----------------------------------------");
printf("\n ***|ENTER 2 FOR SUBTRACTION|*** \n");
printf("----------------------------------------");
printf("\n |ENTER YOUR CHOICE  : ");
scanf("%d",&choice);

switch(choice){

  
 case 1:
 {
   
   printf("\n");
   printf("\n------------------------------------------------");
   printf("\n***||THE ADDTION OF MATRIX A & MATRIX B IS||***");
   printf("\n------------------------------------------------");
   for(i=0;i<2;i++){
       printf("\n\n");
       for(j=0;j<2;j++){
       	c[i][j]=a[i][j] + b[i][j];
        printf("%d\t",c[i][j]);
       }
   }
}
break;

   /*
   The subtraction of matrix A & B is 
   */
case 2:
{
   
    
   printf("\n");
   printf("\n------------------------------------------------------");
   printf("\n***||THE SUBTRACTION OF MATRIX A & MATRIX B IS ||***");
   printf("\n------------------------------------------------------");
   for(i=0;i<2;i++){
       printf("\n\n");
       for(j=0;j<2;j++){
       	c[i][j]=a[i][j] - b[i][j];
        printf("%d\t",c[i][j]);
       }
   
   }
}
break;

   default:
   printf("\n Invalid Option ");
   break;
}

getch();
}

