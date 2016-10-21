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
 
if(employee_leave > 2)
{
 int a=employee_leave -2;
 int b=sal/30*a;
 int newnet=b;
 //printf("\n\n");
 printf("\nNO OF LEAVES IN THIS MONTH        |    %d", a );
 printf("\nTOTAL DETACTION OF %d DAYS         |    %d", a,b);
 
}
printf("\n--------------------------------------------------------------------------");
printf("\nNet SALARY                        |                       %d", net);
printf("\n\n------------------------------------------------------------------------");

}

