#include<stdio.h>
main()
{

int sal, med, fuel, mob, lunch, gross, net,leave,detection, detaction_coast;

printf("\n Enter the Salary:");
scanf("%d",&sal);
printf(" \n Enter no of leave:");
scanf(" %d",&leave); 
if(sal>=15000){
	
	med=sal*2/100;
	fuel=sal*3/100;
	lunch=sal*4/100;
	mob=sal*1/00;
}
if(sal>=20000){
	
	med=sal*3/100;
	fuel=sal*2/100;
	lunch=sal*5/100;
	mob=sal*2/00;
	}
if(sal>=255000){
	
	med=sal*4/100;
	fuel=sal*5/100;
	lunch=sal*6/100;
	mob=sal*2/00;
}
if(sal>=30000){
	
	med=sal*7/100;
	fuel=sal*4/100;
	lunch=sal*6/100;
	mob=sal*3/00;
}

printf("\n------------------------------------------------------------------------------------------");
printf("\n\t\tABC Corporation Pvt Ltd");
printf(" \n------------------------------------------------------------------------------------------");
printf("\n  | Salary                                  |       %d",sal);
printf("\n  | Medical Allownce                        |       %d",med);
printf("\n  |Food Allownce                            |      %d",lunch);
printf("\n  |Fuel Allawnce                            |       %d",fuel);
printf("\n  |Mobile Card                              |       %d",mob);

if(leave >2)
{
	int a=leave-2;
	int b=sal/30*100;
	int detection=a*b;
	detaction_coast=sal-detection;
	printf(" \n-------------------------------------------------------------------------------------------");
	printf(" \n Now salary after detection are                    %d",detaction_coast);
	net=gross-detaction_coast;
	printf(" \n gross salary                                      %d",net );
	printf("\n---------------------------------------------------------------------------------------------");
	
}
net=gross-sal;
printf("\n net salary                                             %",net);

}

