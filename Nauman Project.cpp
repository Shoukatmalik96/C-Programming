#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

void compare();
void menu();
void header();
void cal();
void ascii();
void even();
void fact();
void mark();
void matrix();
void min_max();
void pattern();
void pay();
void search();
void table();
void vowel();

char username[6],s[6]={"ssuet"};
int password,pass=1234;
int choice;
main()
{
 header();
 label1:
 compare();
 header();
 if(strcmp(username,s)==0 && password==pass)
 {
 system("cls");
 header();
 printf("\n\nLOGIN SUCCESSFULL");
 }
 else
 goto label1;
 Sleep(1000);
 printf("\n\n\n\n\t\tLoading Your Profile");
for(int j=0;j<2;j++)
{
 
 for(int i=0;i<8;i++)
 {
  //gotoxy(k,16);
  Sleep(400);
  printf(" . ");
  
 }
 system("cls");
 header();
 printf("\n\n\n\n\n\n\t\tLoading Your Profile");
}

 system("cls");
 menu();
 getch();
}

//definition of compare function
void compare(void)
{
 printf("\nUser Name : ");
 scanf("%s",&username);
 printf("\nPassword  : ");
 scanf("%d",&password);
 if(strcmp(username,s)!=0)
 {
  printf("\n\nWRONG USERNAME");
  Sleep(1000);
  system("cls");
 }
 else if(password!=pass)
 {
  printf("\n\nWRONG PASSWORD");
  Sleep(1000);
  system("cls");
 }
}

//definition of header function
void header()
{
     printf("\n\t\tC Language Project By M.NAUMAN QURESHI");
     printf("\n\t\t  Submitted to Sir Faizan Ahmed");
     printf("\n-------------------------------------------------------------------------------");
}


//definition of menu function
void menu()
{
 system("cls");
 header();
 printf("\nHere is all that you can choose what you want ");
 printf("\n\n\t1)  ASCII Conversion");
 printf("\n\t2)  Calculator");
 printf("\n\t3)  Even-Odd");
 printf("\n\t4)  Factorial");
 printf("\n\t5)  Marksheet");
 printf("\n\t6)  Matrix");
 printf("\n\t7)  Minimum and Maximum");
 printf("\n\t8)  Patterns");
 printf("\n\t9)  Pay-Slip");
 printf("\n\t10) Searching");
 printf("\n\t11) Table");
 printf("\n\t12) Vowel");
 printf("\n\nIF YOU WANT TO EXIT PRESS '0'");
 printf("\n\nEnter your choice : ");
 scanf("%d",&choice);
 
 switch(choice)
 {
               case 1:
                    ascii();
                    menu();
               case 2:
                    cal();
                    menu();
               case 3:
                    even();
                    menu();
               case 4:
                    fact();
                    menu();
               case 5:
                    mark();
                    menu();
               case 6:
                    matrix();
                    menu();
               case 7:
                    min_max();
                    menu();
               case 8:
                    pattern();
                    menu();
               case 9:
                    pay();
               case 10:
                    search();
                    menu();
               case 11:
                    table();
                    menu();     
               case 12:     
                    vowel();
                    menu();
               case 0:
                    {
                    system("cls");
                    printf("\n\n\n\tThank you for working on my project . GOOD BYE");}
                    break;
               default:
                       printf("\n\nINVALID CHOICE");
                       Sleep(1000);
                       menu();                      
 } 
}

void cal()
{

	//Nauman Qureshi
    int a,b,ans,ch;
	int y;
	
	do{
    system("cls");
    printf("\n\t\t  CALCULATOR SECTION");
    printf("\n-------------------------------------------------------------------------------");
    printf("\nEnter the first number : ");
	scanf("%d",&a);
	printf("\nEnter the second number : ");
	scanf("%d",&b);
	printf("\nChoose the operator ");
	printf("\n Press 1 for ADDITION\n Press 2 for SUBTRACTION\n Press 3 for MULTIPLY\n Press 4 for DIVISION");
	printf("\n\nYour Choice  : ");
	scanf("%d",&ch);
	
	switch(ch){
		
		case 1:
		ans=a+b;
		printf("\nThe ADDITION of %d and %d is %d ",a,b,ans);
		break;
		
		case 2:
		ans=a-b ;
		printf("\n The DIFFERENCE of %d and %d is %d",a,b,ans);
		break;
		
		case 3 :
		ans = a*b;
		printf("\n The MULTIPLICATION of %d and %d is %d",a,b,ans);
		break;
			
		case 4 :
        if(b>a)
        {
               printf("\nInvalid Division %d cannot divide %d !!",a,b);
        }
		else{
        ans = a/b;
		printf("\n The DIVISION of %d and %d is %d",a,b,ans);
		break;}
		
		default :
        printf("\n\nINVALID CHOICE !!");
	}
	printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
	scanf(" %d",&y);
 }while(y == 1);
	
 }
 
 void mark(){
	int Che,Math ,Urdu , Eng , Phy  , obt,y ; 
    float per  ;
	char fname[10],lname[10];
    system("cls");
    printf("\n\t\t\t  MARKSHEET SECTION");
    printf("\n-------------------------------------------------------------------------------");
	printf("Enter your first name : ");
	gets(fname);
	printf("Enter your last name : ");
	gets(lname);
	strcat(strcat(fname, " "),lname);
	printf("\nEnter Marks of Chemistry : ");
	scanf("%d",&Che);
	printf("\nEnter Marks of Maths : ");
	scanf("%d",&Math);
	printf("\nEnter Marks of Urdu : ");
	scanf("%d",&Urdu);
	printf("\nEnter Marks of English : ");
	scanf("%d",&Eng);
	printf("\nEnter Marks of Physics : ");
	scanf("%d",&Phy);
	
	obt = Che + Math + Urdu + Eng + Phy ;
	per =  (float)obt/5 ;
	system("cls");
    printf("\n\tGUARDS PUBLIC SCHOOL");
    printf ("\n--------------------------------------");
	printf("\n\t MARK SHEET  ");
	printf ("\n--------------------------------------");
	printf("\n STUDENT NAME IS %s  ",fname);
	printf ("\n--------------------------------------");
	printf ("\n SUBJECT    MARKS_OBTAINED    STATUS");
	
    printf("\n Urdu           %d", Urdu);
    	if (Urdu>=50)
           {
		            printf("             PASS");
           }
	       else
	       {
		            printf("             FAIL");
	        }
    printf("\n English        %d", Eng);
    	if (Eng>=50)
	    {
		            printf("             PASS");
	    }
	
		else
	    {
                    printf("             FAIL");
        }
	
    printf("\n Physics        %d", Phy);
        if (Phy>=50)
	    {
	               	printf("             PASS");
       	}
		else
    	{
		            printf("            FAIL");
      	}
	
    printf("\n Chemistry      %d",Che );
    	if (Che>=50)
	   {
		            printf("             PASS");
       }
		else
	   {
		            printf("             FAIL");
       }
	
    printf("\n Mathematics    %d", Math);
    	if (Math>=50)
	   {
		             printf("             PASS");
	    }
		else
	   {
		             printf("           FAIL");
	    }
	printf ("\n--------------------------------------");
    printf("\n GRAND TOTAL    %d", obt);
    
    if(Phy>=40 && Che>=40 && Urdu>=40 && Math>=40 && Eng >=40)
    {
printf ("\n--------------------------------------");
    printf("\n Percentage     %.2f %%" , per);
    
    if (per>=50)
    {
    	printf(" \n STATUS         PASS");
	}
	
	else 
	
	{
		printf("\n STATUS        FAIL");
	}
    
    printf("\n GRADE       ");
    
    if (per >= 80)
    {
    	printf ("    A+1" ); 
    	
    	
	}
     else if (per >= 70 )
     
	 {
	 	printf ("    A ");
	 }
	  
	  else if ( per >= 60)
	  {
	  	printf("    B");
	  }
	  	
	  	else if (per >= 50)
	  	{
		  
	  		printf( "    C ");
	  	}
	  	else 
	  	
	  	{
	  		printf("-");
		  }
		  
} 
  printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
	scanf(" %d",&y);

if(y == 1);
mark();
     
}

void matrix()
{
       int a[10][10],b[10][10],result[10][10];
       int r=0,c=0,temp,i,j,ch,y;
       int t[10][10];
       
       do{
       system("cls");
       printf("\n\t\t\t  MATRIX SECTION");
       printf("\n-------------------------------------------------------------------------------");
       printf("\n\tMATRIX");
       /*printf("\nEnter the number of rows : ");
       scanf("%d",&r);
       printf("\nEnter the number of columns : ");
       scanf("%d",&c);
       */
       
       //Getting values OF MATRIX A
       
       printf("\nVALUES OF MATRIX A\n");
       
       
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
	   printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
	 scanf(" %d",&y);
}
     while(y==1);
     
} 

void table()
{
     int y,tab;
     
     do{
     
     system("cls");
     printf("\n\t\t\t  TABLE SECTION");
     printf("\n-------------------------------------------------------------------------------");
     printf("\nPress 1 for Table with For-Loop");
     printf("\nPress 2 for Table with While-Loop");
     printf("\nPress 3 for Table with Do While-Loop");
     printf("\nEnter your choice please : ");
     scanf("%d",&tab);
                      switch(tab)
                      {
                                 case 1:
                                      {
                                      int s,e,a,i,ans;
                                      printf("\nEnter the number to generate its table : ");
                                      scanf("%d",&a);
                                      printf("\nWhere to start : ");
                                      scanf("%d",&s);
                                      printf("\nWhere to end : ");
                                      scanf("%d",&e);
                                   
                                       for(i=s ; i<=e; i++)
                                       {
                                              printf("\n\t%d  x  %d  =  %d",a,i,a*i); 
                                       }}break;
                                 case 2:
                                       {
                                       int s,e,a,i,ans;
                                       printf("\nEnter the number to generate its table : ");
                                       scanf("%d",&a);
                                       printf("\nWhere to start : ");
                                       scanf("%d",&s);
                                       printf("\nWhere to end : ");
                                       scanf("%d",&e);
                                      
                                        while(s<=e)
                                		{
                                			printf("\n\t%d  x  %d  =  %d",a,s,s*a);
                                			s++;
                                		}}break;
                                      case 3:
                                       {
                                       int s,e,a,i,ans;
                                       printf("\nEnter the number to generate its table : ");
                                       scanf("%d",&a);
                                       printf("\nWhere to start : ");
                                       scanf("%d",&s);
                                       printf("\nWhere to end : ");
                                       scanf("%d",&e);
                                	   do{
                                		printf("\n\t%d  x  %d  =  %d",a,s,s*a);
                                			s++;
                                		
                                	   }
                                	while(s<=e);
                                	      
                      }break;
                      
                      default:
                              printf("\n\nINVALID CHOICE");
                      }
     printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
	 scanf(" %d",&y);
}
     while(y==1);                      
}  

void min_max()
  {
        int c,n,a[15],min,max,y;
        do{
            
        system("cls");
        printf("\n\t\t     MINIMUM & MAXIMUM SECTION");
        printf("\n-------------------------------------------------------------------------------");
        printf("\n\nHow many number do you want to enter ? : ");
        scanf("%d",&n);
        for(c=0; c<n; c++)
        {
                 printf("\nEnter your %d number : ",c+1);
                 scanf("%d",&a[c]);
        }
        max=a[0];
        for(c=0; c<n; c++)
        {
                 if(max < a[c]){
                      max=a[c];
                 }
        }
        printf("\nThe Largest Number is %d",max);
        min=a[0];
        for(c=0; c<n; c++)
        {
                 if(min>a[c]){
                      min=a[c];
                 }
        }
        
        printf("\nThe Smallest Number is %d",min);
        printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2'  : ");
	    scanf(" %d",&y);
        }
        while(y==1);
     
  }

void ascii(){
      char c;
      int y;
      do{
      system("cls");
      printf("\n\t\t      ASCII CONVERSION SECTION");
      printf("\n-------------------------------------------------------------------------------");
      printf("\nEnter character : ");
      scanf(" %c",&c);
      printf("\n\n The ASCII value of %c is %d",c,c);
      printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
      scanf(" %d",&y);
        }
        while(y==1);
  
     
     }
     
void pattern(){
      int y;
      do{
      system("cls");
      printf("\n\t\t\t    PATTERNS SECTION");
      printf("\n-------------------------------------------------------------------------------");
      int design;
      printf("\n 1) Pyramid Pattern");
      printf("\n 2) Inverted Pyramid Pattern");
      printf("\n 3) Diamond Pattern");
      printf("\n 4) Sand Clock Pattern");
      printf("\n 5) Eye Pattern");
      printf("\n\nWhich pattern do you want ? : ");
      scanf("%d",&design);
      system("cls");
      switch(design){
                     case 1:
                               
                          {
                                printf("\n  Pyramid Pattern");
                                int a,b,c=17,t;
                                printf("\n\n\n\n");
                                for(t=1; t<=17; t++){
                                for(a=c; a>=1; a--)
                                printf("  ");
                                c=c-1;
                                for(b=1; b<=(2*t)-1; b++)
                                {
                                printf(" %c",30);
                                }                
                                printf("\n");
                                }
                          }break;
                          
                     case 2:
      
                        {
                            
                                printf("\n  Inverted Pyramid Pattern");
                                 int i,j,k=17,t;
                                 printf("\n\n\n\n");
                                 for(t=17; t>=1; t--)
                                 { 
                                 for(i=k; i<17; i++)
                                 printf("  ");
                                 k=k-1;
                                 for(j=1; j<=(2*t)-1; j++)
                                 {
                                 printf(" %c",31);
                                 }
                                 printf("\n");
               
                                 }
                                 }break;
  
                     case 3:
                         

                          {
                                  printf("\n  Diamond Pattern");
                              int a,b,c=9,t;
                              int i,j,k=9;
                              printf("\n\n\n\n");
                              for(t=1; t<=10; t++){
                                       for(a=c; a>=0; a--)
                                       printf("  ");
                                       c=c-1;
                                           for(b=1; b<=(2*t)-1; b++)
                                           {
                                                    printf(" %c",4);
                                           }
                                           printf("\n");
                              }
                              for(int z=0; z<=20; z++)
                              printf(" %c",4);
                        
                              printf("\n");
                              for(t=10; t>=1; t--)
                                       { 
                                         for(i=k; i<10; i++)
                                                  printf("  ");
                                                  k=k-1;
                                                        for(j=1; j<=(2*t)-1; j++)
                                                        {
                                                                 printf(" %c",4);
                                                        }
                                                        printf("\n");
                                       
                                       }
                              
                        }break;

                     case 4:
    
                          {
                               
                                printf("\n Sand Clock Pattern");
                              int i,j,k=10,t;
                              int a,b,c=9;
                              printf("\n\n\n\n");
                                       for(t=10; t>=1; t--)
                                       { 
                                         for(i=k; i<10; i++)
                                                  printf("  ");
                                                  k=k-1;
                                                        for(j=1; j<=(2*t)-1; j++)
                                                        {
                                                                 printf(" %c",178);
                                                        }
                                                        printf("\n");
                                       
                                       }
                                       
                                       for(t=1; t<=10; t++){
                                           for(a=c; a>=1; a--)
                                           printf("  ");
                                           c=c-1;
                                           for(b=1; b<=(2*t)-1; b++)
                                           {
                                                    printf(" %c",178);
                                           }
                                           printf("\n");
                                  }
                              
                        }break;

                     case 5:
                          {
                               
                            printf("\n  Eye Pattern");
                              int i,j,k,a,x;
                              int b=1,y=6;
                              printf("\n\n\n\n\n");
                              for(i=5; i>=1; i--)
                              {
                                       for(j=1; j<=i; j++)
                                       printf("%d  ",j);
                                                  for(a=b; a>1; a--)
                                                  printf("   ");
                                                            for(k=i; k>=1; k--)
                                                            printf("%d  ",k);
                                                            printf("\n");
                                                            b=b+2;
                              }
                              for(i=2; i<=5; i++)
                              {
                                       for(j=1; j<=i; j++)
                                       printf("%d  ",j);
                                                  for(x=1; x<=y; x++)
                                                  printf("   ");
                                                              for(k=i; k>=1; k--)
                                                              printf("%d  ",k);
                                                              printf("\n");
                                                              y=y-2;
                              }
                              
                              }break;
                     
                      default:
                              printf("\n\nINVALID CHOICE");
                     }
      printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
      scanf("%d",&y);
        }
        while(y == 1);                 
     
     }
     
void even(){
       int i,ch,y;
       do{
       system("cls");
       printf("\n\t\t\t  ODD & EVEN SECTION");
       printf("\n-------------------------------------------------------------------------------");
       printf("\nEnter a number : ");
       scanf("%d",&ch);
       if(ch%2==0)
       {
                  printf("\nThe number %d is EVEN !",ch);
                  }
       else
       printf("\nThe number %d is ODD !",ch);
       printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
       scanf("%d",&y);
      
       }while(y==1);
     }

void vowel(){
     char ch;
     int y;
     do{
     system("cls");
     printf("\n\t\t\t    VOWEL SECTION");
     printf("\n-------------------------------------------------------------------------------");
     printf("\nEnter a character : ");
     scanf(" %c",&ch);
     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
     {
                printf("\nThe character %c is a VOWEL",ch);
     }
     
     else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
     {
                printf("\nThe character %c is a VOWEL",ch);
     }
     
     else
     {
                printf("\nThe character %c is a NOT A VOWEL or CONSONANT",ch);
     }
     
     printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
     scanf("%d",&y);
      
     }while(y==1);
     
}

void fact(){
     int y,n,i,sum=1;
     do{
         system("cls");
         printf("\n\t\t\t    FACTORIAL SECTION");
         printf("\n-------------------------------------------------------------------------------");
         printf("\nEnter a number : ");     
         scanf("%d",&n);
         printf("\nThe factorial of %d! is as follow\n\n",n);
         for(i=1; i<=n; i++)
         {
                  sum=sum*i;         
         }
         for(i=n; i>=1; i--)
         printf(" %d! . ",i);
         printf(" = %d",sum);
         printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS '2' : ");
         scanf("%d",&y); 
     }while(y==1);
     }

void search()
{ 
           int i,y,num,s,ch;
           int a[15],flag=0;
           char c[15];
           char sc;
     
     do{
        system("cls");
        printf("\n\t\t\t  SEARCHING SECTION");
        printf("\n-------------------------------------------------------------------------------");
        printf("\nPress 1 for searching numbers");
        printf("\nPress 2 for searching alphabets");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch){
        case 1:
        {
        printf("\nHow many numbers for searching ? ");
        scanf("%d",&num);
        for(i=0; i<num; i++)
        {
                printf("\nEnter %d number : ",i+1);
                scanf("%d",&a[i]);
        }
        printf("\nEnter number to be searched : ");
        scanf("%d",&s);
        
        
        
        system("cls");
        printf("\nThe numbers you entered");
        for(i=0; i<num; i++)
        {
                 printf("\n\tA[%d] = %d ",i,a[i]);
        }
        for(i=0; i<num; i++)
        {
                if(a[i] == s)
                {
                        flag=1;
                        break;
                }
        }
        if(flag == 1)
        {
                printf("\n\nThe number %d is found in the array at index [%d]",s,i);
        }
        else
        printf("\n The number is not found in the list");
        }break;
        
        case 2:
        {
         printf("\nHow many alphabets for searching ? ");
        scanf("%d",&num);
        for(i=0; i<num; i++)
        {
                printf("\nEnter %d alphabets : ",i+1);
                scanf(" %c",&c[i]);
        }
        printf("\nEnter alphabet to be searched : ");
        scanf(" %c",&sc);
        
        
        
        system("cls");
        printf("\nThe alphabets you entered");
        for(i=0; i<num; i++)
        {
                 printf("\n\tA[%d] = %c ",i,c[i]);
        }
        for(i=0; i<num; i++)
        {
                if(c[i] == sc)
                {
                        flag=1;
                        break;
                }
        }
        if(flag == 1)
        {
                printf("\n\nThe alphabet %c is found in the array at index [%d]",sc,i);
        }
        else
        printf("\n The alphabet is not found in the list");
        }break;
        
        
        }
        printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS 2 : ");
        scanf("%d",&y); 
     }while(y==1);        
}


void pay()
{
int basic, sal ,med ,mob,fuel, lunch ,itax ,gross , net,employee_leave,y;
char fn[15],ln[15];
do
{
system("cls");
printf("\n\t\t\t  PAY-ROLL SECTION");
printf("\n-------------------------------------------------------------------------------");
printf("\n Enter your First Name : ");
scanf("%s",&fn);
printf("\n Enter your Last Name : ");
scanf("%s",&ln);
printf("\n Enter your salary : ");
scanf("%d",&sal);
printf("\n Enter the number of leaves : ");
scanf("%d",&employee_leave);

//The no of leave which is allow for every employee in the organization are 2

if(sal<=10000)
{

 med=sal*3/100;
 lunch=sal*1/100;
 fuel=sal*2/100;
 mob=sal*1/100;
}
else if(sal<=15000)
{

 med=sal*5/100;
 lunch=sal*2/100;
 fuel=sal*4/100;
 mob=sal*1/100;
}
else if(sal<=20000)
{

 med=sal*7/100;
 lunch=sal*3/100;
 fuel=sal*5/100;
 mob=sal*2/100;
}
else if(sal<=25000)
{

 med=sal*8/100;
 lunch=sal*4/100;
 fuel=sal*7/100;
 mob=sal*4/100;
}

else if(sal>25000)
{
 med=sal*10/100;
 lunch=sal*6/100;
 fuel=sal*8/100;
 mob=sal*5/100;
}

gross=sal+med+lunch+mob+fuel;
itax=gross*2/100;
net= gross-itax;

//concatinating name
//strcat(fn," ");
//strcat(fn,ln);
strcat((strcat(fn," ")),ln);
system("cls");
printf("\n---------------------------------------------------------------------------");
printf("\n\t\tKarachi Company Pvt Ltd Pakistan");
printf("\n---------------------------------------------------------------------------");
printf("\nEmployee Name       %s",fn);
printf("\n\nSalary              %d",    sal);
printf("\nMedical             %d",    med);
printf("\nLunch               %d",    lunch);
printf("\nFuel                %d",    fuel);
printf("\nMobile              %d",    mob);
printf("\n---------------------------------------------------------------------------");
printf("\nGross Salary        %d",    gross);
printf("\n---------------------------------------------------------------------------");
printf("\nIncome Tax          %d",     itax);
printf("\n---------------------------------------------------------------------------");

if(employee_leave >= 3)
{
 int a=employee_leave -2;
 int b=sal/30*a;
 int newnet=net-b;
 printf("\nLeave of employee in this month  = %d",      a );
 printf("\nTotal deduction of %d days        = %d",      a,b);
 printf("\n---------------------------------------------------------------------------");
 printf("\nNet Salary                       = %d",    newnet);
 printf("\n---------------------------------------------------------------------------");

}
else{
	
printf("\nNet Salary                       = %d",    net);
printf("\n---------------------------------------------------------------------------");
}
printf("\n\n\n\tDO YOU WANT TO DO FURTHER CALCULATION ? \n\n\tIF YES PRESS '1' IF NO PRESS 2 : ");
scanf("%d",&y); 
     }while(y==1);        
}






