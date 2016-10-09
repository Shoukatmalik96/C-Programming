#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){

       int a[10][10],b[10][10],result[10][10];
       int r=2,c=2,temp,i,j,ch;
       int t[10][10];
       
       printf("\n\tMATRIX");
       //Getting values OF MATRIX A
       
       printf("\nVALUES OF MATRIX A\n");
       /*printf("\nEnter the number of rows : ");
       scanf("%d",&r);
       printf("\nEnter the number of columns : ");
       scanf("%d",&c);
       */
       
       
       for(i=0; i<r; i++)
       {
                for(j=0; j<c; j++)
                {
                         printf("\nEnter the Value for a[%d][%d] : ",i,j);
                         scanf("%d",&a[i][j]);
                }
       }   
       
       //Getting values of matrix B
       
       printf("\nVALUES OF MATRIX B\n");
       /*printf("\nEnter the number of rows : ");
       scanf("%d",&r);
       printf("\nEnter the number of columns : ");
       scanf("%d",&c);
       */
       
       
       for(i=0; i<r; i++)
       {
                for(j=0; j<c; j++)
                {
                         printf("\nEnter the Value for b[%d][%d] : ",i,j);
                         scanf("%d",&b[i][j]);
                }
       }   
       
       system("cls");
       printf("\nVALUES OF MATRIX A\n");
        for(i=0; i<r; i++)
       {		
       			printf("\n\n");
                for(j=0; j<c; j++)
                {
                         printf(" \t %d ",a[i][j]);
                }
       }   
       printf("\n\n");
       
       printf("\nVALUES OF MATRIX B\n");
       for(i=0; i<r; i++)
       {
                printf("\n\n");
				for(j=0; j<c; j++)
                {
                         printf(" \t %d ",b[i][j]);
                }
       }
       printf("\n\n");
       printf("\n------------------------------------------------");
       printf("\n What do you want to operate ?\n");
       printf("\n------------------------------------------------");
	   printf("\n Press 1 for ADDITION of Matrix");
	   printf("\n Press 2 for SUBTRACTION of Matrix");
	   printf("\n Press 3 for TRANSPOSE of Matrix");
	   printf("\n------------------------------------------------");
	   printf("\n Enter your choice : ");
	   scanf("%d",&ch);
	   system("cls");
	   switch(ch)
	   {
	   	
	   	case 1:
	   		{
	   			printf("\nThe ADDITION of Matrix A & B \n ");
	   		 for(i=0; i<r; i++)
       			{
                printf("\n\n");
					for(j=0; j<c; j++)
                	{
                         result[i][j]=a[i][j]+b[i][j];
						 printf(" \t %d ",result[i][j]);
                	}
       			}
	   		}
	   	break;
	   	
		case 2:
	   		{
	   			printf("\nThe SUBTRACTION of Matrix A & B \n ");
	   		 for(i=0; i<r; i++)
       			{
                printf("\n\n");
					for(j=0; j<c; j++)
                	{
                         result[i][j]=a[i][j]-b[i][j];
						 printf(" \t %d ",result[i][j]);
                	}
       			}
	   		}
	   	break;
	   	
	   	case 3:
	   		{
	   		 printf("\nThe TRANSPOSE of Matrix A \n\n ");
	   		 for(i=0; i<r; i++)
       			{
                printf("\n\n");
					for(j=0; j<c; j++)
                	{
                         temp=a[i][j];
                         result[i][j]=a[j][i];
                         a[j][i]=temp;
						 printf(" \t %d ",result[i][j]);
                	}
       			}
       		printf("\nThe TRANSPOSE of Matrix B \n\n ");
	   		 for(i=0; i<r; i++)
       			{
                printf("\n\n");
					for(j=0; j<c; j++)
                	{
                         temp=b[i][j];
                         result[i][j]=b[j][i];
                         b[j][i]=temp;
						 printf(" \t %d ",result[i][j]);
                	}
       			}

	   		}
	   	break;
		
		default:
		   printf("\n\nINVALID CHOICE ");	
	   	
	   }
	
       getch();
}
