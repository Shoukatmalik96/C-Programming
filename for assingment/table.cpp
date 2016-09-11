#include<stdio.h>
#include<conio.h>
main(){
int start_tab,end_table,num;
printf("\n Enter any Number to print its table :");
scanf("%d",&num);
printf("\n Enter any Number to start table :");
scanf("%d",&start_tab);
printf("\n Enter any Number to end its table :");
scanf("%d",&end_table);
printf("\n\tTable");
printf("\n-----------------------------------------");
for(int i=start_tab;i<=end_table; i++)
printf("\n%d* %d=%d",num,i,num*i);
 getch();      
       
}
