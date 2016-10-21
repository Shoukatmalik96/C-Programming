#include<stdio.h>
#include<conio.h>
main(){
	
	
int cd ,dvd,vcd,amt,price,stax ,ic,qty,tamt;
dvd=60;
vcd=20;
 cd=30;
printf("\n SELECT ITEM :");
printf("\n 1. FOR DVD ");
printf("\n 2. FOR VCD ");
printf("\n 3. FOR CD  ");
printf("\nEnter Item Code :");
scanf("%d ",&ic);
printf("\n");
printf("\n Enter quantity : ");
scanf("%d",&qty);
printf("\n\t\t\tABC TRADERS \n------------------------------------------------------------");
printf("\nPRICE LIST OF ITEMS");
printf("\n1.DVD         %d",dvd);
printf("\n2.VCD         %d",dvd);
printf("\n3.CD          %d",cd);
printf("\n------------------------------------------------------------");
printf("\n QUANTITY       PARTICULAR         U.PRICE          AMOUNT");
printf("\n------------------------------------------------------------");

if (ic == 1){
amt = dvd*qty ;
printf("\n %d \t         DVD\t\t   %d \t\t    %d ",qty,dvd,amt);

}else if(ic == 2)
{
	amt = vcd*qty ;
	printf("\n %d \t         VCD\t\t   %d \t\t    %d ",qty,vcd,amt);

}
else if(ic == 3)
{
	amt = cd*qty ;
	printf("\n %d \t          CD\t\t   %d \t\t    %d ",qty, cd,amt);

}
stax =  amt *  17  /   100 ;
tamt =  amt + stax ;
printf("\n\n\n Sales  Tax                    %d ",stax);
printf("\n\n\n Amount Tax                    %d ",tamt);



	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
