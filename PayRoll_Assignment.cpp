#include<stdio.h>
main(){

int basic, sal ,med ,mob,fuel, lunch ,itax ,gross , net,employee_leave;

printf("\n Enter your Salary :");
scanf("%d",&sal);
printf("\n Enter the number of leaves : ");
scanf("%d",&employee_leave);

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


printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
printf("\n\t\tRoshan Packages Pvt Ltd Pakistan");
printf("\n\n------------------------------------------------------------------------");
printf("\nSalary                                                       %d",    sal);
printf("\nmed                                                          %d",    med);
printf("\nlunch                                                        %d",    lunch);
printf("\nfuel                                                         %d",    fuel);
printf("\nmob                                                          %d",    mob);
printf("\n--------------------------------------------------------------------------");
printf("\nGross Salary                                                 %d",    gross);
printf("\n--------------------------------------------------------------------------");
printf("\nIncome Tax                                                   %d",     itax);
printf("\n------------------------------------------------------------------------");

if(employee_leave > 2)
{
 int a=employee_leave -2;
 int b=sal/30*a;
 int newnet=b;
 printf("\nNo of Leave of employee in this moth                          %d",      a );
 printf("\nTotal deduction of %d days                                    %d",      a,b);
 
}
printf("\n----------------------------------------------------------------------------");
printf("\nNet Salary                                                    %d",    net);
printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
}

