#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void compare();
void menu();
void header();

char username[6],s[6]={"malik"};
int password,pass=123;
int  op;
char option;
main(){
header();
 label1:
 compare();
 header();
 system("COLOR AC");
 system("COLOR 1F");
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
  Sleep(40);
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

void header()
{
     printf("\n\t\t\t\tC Mini project");
printf("\n\t\t\tMade by Shoukat Malik for Sir Faizan ");
     printf("\n\t\t\t  ");
     printf("\n-------------------------------------------------------------------------------");
}

void menu()
{
 system("cls");
 header();
 printf("\nList of Available features");
 printf("\n\n\t1) MARKSHEET");
 printf("\n\t2)  CALCULATOR");
 printf("\n\t3)  PAY SLIY");
 printf("\n\t4)  FACTORIAL ");
 printf("\n\t5)  GROSRT BILL");
 printf("\n\t6)  MATRIX");
 printf("\n\t7)  TABLE ");
 printf("\n\nIF YOU WANT TO EXIT PRESS '0'");
 printf("\n\nEnter your choice : ");
 scanf("%d",&op);
 system("cls");
 	
switch(op)
 {
               case 1:
                    {
                    	
						
						
						FILE *f;
                        f=fopen("marksheet.txt","a");
						system("cls");
                    	int math, phys,chem, eng,urdu, Islam,obt,y;
                        float percentage;
                        char Grade,fname[10],lname[10];	
      
    do{
    system("cls");
	printf("\n\t\t\tMARKS SHEET");
    printf("\n-------------------------------------------------------------------------------");
    printf("\nEnter your First Name :");
	scanf("%s",&fname);
	printf("\nEnter your Last Name :");
	scanf("%s",&lname);
	strcat(strcat(fname, " "),lname);
	
	printf("\n Enter Math Marks :");
	scanf("%d",&math);
	printf("\n Enter Physics Marks :");
	scanf("%d",&phys);
	printf("\n Enter Chemistry Marks :");
	scanf("%d",&chem);
	printf("\n Enter English Marks :");
	scanf("%d",&eng);
	printf("\n Enter Urdu Marks :");
	scanf("%d",&urdu);
	printf("\n Enter Islamiat Marks :");
	scanf("%d",&Islam);
	
	// Calculating Total Marks
	obt=math+phys+chem+eng+urdu+Islam;
	// Calculating Percentage
	percentage=(float)obt/6;
	system("cls");
	printf("\n\t\t\t\tMARKS SHEET");
	fprintf(f,"\n\t\t\tMARKS SHEET");
	printf("\n-------------------------------------------------------------------------------");
	printf("\n\nStuden Name :%s",fname);
	fprintf(f,"\n\n Name : %s",fname);
	printf("\n-------------------------------------------------------------------------------");
	printf("\nBORD OF INTERMIDIATE & SECONDRY EDUCATION KARACHI");
	fprintf(f,"\nBORD OF INTERMIDIATE & SECONDRY EDUCATION KARACHI");
	printf("\n-------------------------------------------------------------------------------");
	fprintf(f,"\n----------------------------------------------------------------------");
printf("\nSUBJECTS                        OBTAIN_MARKS                      STATUS");
fprintf(f,"\nSUBJECTS                        OBTAIN_MARKS                      STATUS");
	if(phys>=35){
		
	printf("\nPhysics                             %d                             Pass",phys);
	fprintf(f,"\nPhysics                             %d                             Pass",phys); 	
	}
    else{
    printf("\nPhysics                             %d                             Fail",phys);
     fprintf(f,"\nPhysics                             %d                             Fail",phys);
	}
	if(math>=35){
		
	printf("\nMath                                %d                             Pass",math);
	fprintf(f,"\nMath                                %d                             Pass",math);
	 	
	}
    else{
    printf("\nMath                                %d                             Fail",math);
    fprintf(f,"\nMath                                %d                             Fail",math);
	}	
	if(chem>=35){
		
	printf("\nChemistry                           %d                             Pass",chem);
	fprintf(f,"\nChemistry                           %d                             Pass",chem);
	 	
	}
    else{
    printf("\nChemistry                           %d                             Fail",chem);
    fprintf(f,"\nChemistry                           %d                             Fail",chem);
	}	
	if(eng>=35){
		
	printf("\nEnglish                             %d                             Pass",eng);
	fprintf(f,"\nEnglish                             %d                             Pass",eng);
	 	
	}
    else{
    printf("\nEnglish                             %d                             Fail",eng);
    fprintf(f,"\nEnglish                             %d                             Fail",eng);
	}
	if(urdu>=35){
		
	printf("\nUrdu                                %d                             Pass",urdu);
	fprintf(f,"\nUrdu                                %d                             Pass",urdu);
	 	 
	}
    else{
    printf("\n Urdu                               %d                             Fail",urdu);
    fprintf(f,"\n Urdu                               %d                             Fail",urdu);
	}
	if(Islam>=35){
		
	printf("\nIslamiat                            %d                             Pass",Islam);
	printf("\nIslamiat                            %d                             Pass",Islam);
	 	
	}
    else{
    printf("\nIslamiat                            %d                             Fail",Islam);
    printf("\nIslamiat                            %d                             Fail",Islam);
    	
	}
	printf("\n-------------------------------------------------------------------------------");
	printf("\n TotalMarks                               500");
	printf("\n Obtain Marks                             %d",                            obt);
	printf("\n-------------------------------------------------------------------------------");
	
	fprintf(f,"\n------------------------------------------------------------------------");
	fprintf(f,"\n TotalMarks                               500");
	fprintf(f,"\n Obtain Marks                             %d",                            obt);
	fprintf(f,"\n-------------------------------------------------------------------------");
	
	
    //printing Grade and Percentage
	if(phys>=35 && chem>=35 && math>=35 && eng>=35 && urdu>=35 && Islam>=35 )
  	{
		
	printf("\n Percentage                              %.2f",percentage);}
	fprintf(f,"\n Percentage                           %.2f",percentage);
	// Calculating Grde of The Student
	if(percentage>80){
	printf("\n A One  Grade");
	fprintf(f,"\n A One  Grade");
	}
	if(percentage>70 && percentage<=80){
	printf("\n A Grade");
	fprintf(f,"\n A Grade");
    }
    if(percentage>60 && percentage<=70){
	printf("\n B Grade");
	fprintf(f,"\n B Grade");
    }
    if(percentage>50 && percentage<=60){
	printf("\n C Grade");
	fprintf(f,"\n C Grade");
    }
    if(percentage>40 && percentage<=50){
	printf("\n Fail");
    fprintf(f,"\n Fail");
    }
  printf("\n\nPress 1 for Continue and  2 for Exit : ");
  scanf(" %d",&y);
  }while(y== 1);
  	system("cls");
    menu();
                    }
                    break;
               case 2:
                   {
                   	FILE *f;
                    f=fopen("calculator.txt","a");
                   	int add ,sub, mul, div,num1,num2,op,result,k;	
do{
system("cls");
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
system("cls");

switch(op){
 
 case 1:
 {
 result=num1+num2;	
 printf("\n The sum of %d and %d is %d",num1,num2,result);
 fprintf(f,"\n The sum of %d and %d is %d",num1,num2,result);
 break;
 }
case 2:
 {
 result=num1-num2;	
 printf("\n The subtraction of %d and %d is %d",num1,num2,result);
 fprintf(f,"\n The subtraction of %d and %d is %d",num1,num2,result);
 break;
 }
case 3:
 {
 result=num1*num2;	
 printf("\n The multiplication of %d and %d is %d",num1,num2,result);
 fprintf(f,"\n The multiplication of %d and %d is %d",num1,num2,result);
 break;
}
case 4:
 {
 result=num1/num2;	
 printf("\n The division of %d and %d is %d",num1,num2,result);
 fprintf(f,"\n The division of %d and %d is %d",num1,num2,result);
 }
 break;
 default :
	
	 printf("\n Invalid Operator");	
	}
 printf("\n Do you want to do it again then Press 1 and if Exit then press 2 : ");
  scanf(" %d",&k);
  }while(k == 1);
  menu();
                   }
                   
                   break;
               case 3:
                    {
                    FILE *f;
                    f=fopen("payslip.txt","a");
					int basic, sal ,med ,mob,fuel, lunch ,itax ,gross , net,employee_leave,z;
do{ 
system("cls");
system("cls");               
printf("\n Enter your Salary :");
scanf("%d",&sal);
printf("\n Enter the number of leaves : ");
scanf("%d",&employee_leave);
system("cls");

//The no of leave which is allow for every employee in the organization are

{

 med=sal*3/100;
 lunch=sal*1/100;
 fuel=sal*2/100;
}
if(sal>=15000)
{

 med=sal*5/100;
 lunch=sal*2/100;
 fuel=sal*4/100;
 mob=sal*1/100;
}
if(sal>=20000)
{

 med=sal*7/100;
 lunch=sal*3/100;
 fuel=sal*5/100;
 mob=sal*2/100;
}
if(sal>=25000)
{

 med=sal*8/100;
 lunch=sal*4/100;
 fuel=sal*7/100;
 mob=sal*4/100;
}


gross=sal+med+lunch+mob+fuel;
itax=gross*2/100;
net= gross-itax;

printf("\n\n------------------------------------------------------------------------");
printf("\n\t\t| ROSHAN PACAGES PAKISTAN PVT Ltd |");
printf("\n\n------------------------------------------------------------------------");
printf("\nSALARY                            |                          %d", sal);
printf("\nMEDICAL                           |                          %d", med);
printf("\nLUNCH                             |                          %d", lunch);
printf("\nFUEL                              |                          %d", fuel);
printf("\nMOBILE CARD                                                  %d",  mob);
printf("\n--------------------------------------------------------------------------");
printf("\nGROSS SALARY                      |    %d", gross);
printf("\nINCOME TAX                        |    %d", itax);

fprintf(f,"\n\n------------------------------------------------------------------------");
fprintf(f,"\n\t\t| ROSHAN PACAGES PAKISTAN PVT Ltd |");
fprintf(f,"\n\n------------------------------------------------------------------------");
fprintf(f,"\nSALARY                            |                          %d", sal);
fprintf(f,"\nMEDICAL                           |                          %d", med);
fprintf(f,"\nLUNCH                             |                          %d", lunch);
fprintf(f,"\nFUEL                              |                          %d", fuel);
fprintf(f,"\nMOBILE CARD                                                  %d",  mob);
fprintf(f,"\n--------------------------------------------------------------------------");
fprintf(f,"\nGROSS SALARY                      |    %d", gross);
fprintf(f,"\nINCOME TAX                        |    %d", itax);
 
if(employee_leave > 2)
{
 int a=employee_leave -2;
 int b=sal/30*a;
 int newnet=b;
 //printf("\n\n");
 printf("\nNO OF LEAVES IN THIS MONTH        |    %d", a );
 printf("\nTOTAL DETACTION OF %d DAYS         |    %d", a,b);
 
 fprintf(f,"\nNO OF LEAVES IN THIS MONTH        |    %d", a );
 fprintf(f,"\nTOTAL DETACTION OF %d DAYS         |    %d", a,b);
 
}
printf("\n--------------------------------------------------------------------------");
printf("\nNet SALARY                        |                       %d", net);
printf("\n\n------------------------------------------------------------------------");

fprintf(f,"\n--------------------------------------------------------------------------");
fprintf(f,"\nNet SALARY                        |                       %d", net);
fprintf(f,"\n\n------------------------------------------------------------------------");

 printf("\n Do you want to do it again Press 1 and Press 2 for Exit: ");
  scanf(" %d",&z);
  }while(z== 1);
  menu();
                    }
                    break;
               case 4:
                    {
                    	FILE *f;
                        f=fopen("factorial.txt","a");
	                    int fact,i,n,p;
	                    fact = 1;
    do{
    system("cls");
	printf("\n---------------------------------------------------------");
	printf("\n\tEnter the number to find its Factorial :");
	scanf("%d" , &n);
   for(int k= 1; k <= n; k++)
   {
       fact = fact*k;		
   }
   printf("\n\n");
   printf("\n\t\tFACTORIAL OF %d is %d", n , fact);
   fprintf(f,"\n\t\tFACTORIAL OF %d is %d", n , fact);
   printf("\n---------------------------------------------------------");	
   printf("\n Press 1 for to do it again and Press 2 for Exit : ");
  scanf(" %d",&p);
  }while(p == 1);
  menu();	
                    }
                    break;
               case 5:
                   
                   {
                   	   FILE *f;
                       f=fopen("grocryslip.txt","a");
					   int cd ,dvd,vcd,amt,price,stax ,ic,qty,tamt,s;
dvd=60;
vcd=20;
cd=30;
do{
      system("cls");
printf("\n SELECT ITEM :");
printf("\n 1. FOR DVD ");
printf("\n 2. FOR VCD ");
printf("\n 3. FOR CD  ");
printf("\nEnter Item Code :");
scanf("%d",&ic);

printf("\n\n Enter quantity : ");
scanf("%d",&qty);
system("cls");
printf("\n\t\t\tABC TRADERS \n------------------------------------------------------------");
printf("\nPRICE LIST OF ITEMS");
printf("\n1.DVD         %d",dvd);
printf("\n2.VCD         %d",dvd);
printf("\n3.CD          %d",cd);
printf("\n------------------------------------------------------------");
printf("\n QUANTITY       PARTICULAR         U.PRICE          AMOUNT");
printf("\n------------------------------------------------------------");

fprintf(f,"\n------------------------------------------------------------");
fprintf(f,"\n QUANTITY       PARTICULAR         U.PRICE          AMOUNT");
fprintf(f,"\n------------------------------------------------------------");


if (ic == 1){
amt = dvd*qty ;
printf("\n %d \t         DVD\t\t   %d \t\t    %d ",qty,dvd,amt);
fprintf(f,"\n %d \t         DVD\t\t   %d \t\t    %d ",qty,dvd,amt);

}else if(ic == 2)
{
	amt = vcd*qty ;
	printf("\n %d \t         VCD\t\t   %d \t\t    %d ",qty,vcd,amt);
    fprintf(f,"\n %d \t         VCD\t\t   %d \t\t    %d ",qty,vcd,amt);

}
else if(ic == 3)
{
	amt = cd*qty ;
	printf("\n %d \t          CD\t\t   %d \t\t    %d ",qty, cd,amt);
	fprintf(f,"\n %d \t          CD\t\t   %d \t\t    %d ",qty, cd,amt);

}
stax =  amt *  17  /   100 ;
tamt =  amt + stax ;
printf("\n\n\n Sales  Tax                    %d ",stax);
fprintf(f,"\n\n\n Sales  Tax                    %d ",stax);
printf("\n\n\n Amount Tax                    %d ",tamt);
fprintf(f,"\n\n\n Amount Tax                    %d ",tamt);


 printf("\n Press 1 for do it again and Press 2 for Exit from to go to main menu : ");
  scanf(" %d",&s);
  }while(s == 1);
  menu();
                   } break;
               case 6:
                    {
                    FILE *f;
                    f=fopen("matrix.txt","a");
					int a[10][10],b[10][10],i,j,c[10][10],choice,p;
					do{
                        system("cls");
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
  
  fprintf(f,"\n\tGIVEN MATRIX A\n");
  fprintf(f,"\n--------------------------------");
  for(i=0;i<2;i++){
        printf("\n\n");
        for(j=0;j<2;j++){
        printf("%d\t",a[i][j]);
        fprintf(f,"%d\t",a[i][j]);
        }
  }
   printf("\n\n");
   printf("\n\tGIVEN MATRIX B\n");
   printf("\n---------------------------------");
   
   fprintf(f,"\n\n");
   fprintf(f,"\n\tGIVEN MATRIX B\n");
   fprintf(f,"\n---------------------------------");
   
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
system("cls");  
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
   
   fprintf(f,"\n------------------------------------------------");
   fprintf(f,"\n***||THE ADDTION OF MATRIX A & MATRIX B IS||***");
   fprintf(f,"\n------------------------------------------------");
   for(i=0;i<2;i++){
       printf("\n\n");
       for(j=0;j<2;j++){
       	c[i][j]=a[i][j] + b[i][j];
        printf("%d\t",c[i][j]);
        fprintf(f,"%d\t",c[i][j]);
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
   
   fprintf(f,"\n------------------------------------------------------");
   fprintf(f,"\n***||THE SUBTRACTION OF MATRIX A & MATRIX B IS ||***");
   fprintf(f,"\n------------------------------------------------------");
   
   for(i=0;i<2;i++){
       printf("\n\n");
       for(j=0;j<2;j++){
       	c[i][j]=a[i][j] - b[i][j];
        printf("%d\t",c[i][j]);
        fprintf(f,"%d\t",c[i][j]);
       }
   
   }
}
break;
default :
	printf("\n Invalid Operation ");
   }/*end of Inner switch */
 printf("\n Press 1 for do it again and Press 2 for Exit from to go to main menu :");
  scanf(" %d",&p);
}while(p == 1);
 menu();	
                    }
					break;
               case 7:
                   {
                          
                   	FILE *f;
                    f=fopen("table.txt","a");
                   	int n1, n2, select,start, end ,num ,k , number,p;
                   	do{
                        system("cls");
printf("\n ENTER NUMBER WANT TO PRINT ITS TABLE :");
scanf("%d",&num);
printf("\n FROM WHERE YOU WANT TO START THE TABEL  : ");
scanf(" %d",&start);
printf("\n ENTER A RANGE TO END THE TABLE  : ");
scanf(" %d",&end);	
system("cls");
  for (k =start;k<=end;k++){
  	int result;
  	result =num* k;
  printf("\n %d  X  %d  =  %d \n",num, k, result);
  fprintf(f,"\n %d  X  %d  =  %d \n",num, k, result);	
	
  }	
   printf("\n Press 1 for do it again and Press 2 for Exit from to go to main menu :");
  scanf(" %d",&p);
  }while(p == 1);
   menu();
                   }
               break;
               
               case 0:
                    {
                    system("cls");
                    printf("\n\n\n\tThank you for working on my project . GOOD BYE");
					}
                    break;
               default:
                       {
                       
                printf("\n\nINVALID CHOICE");
                       Sleep(1000);
                       menu();
				}
 } 
}	
