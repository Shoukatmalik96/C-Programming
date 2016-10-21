#include<stdio.h>
#include<conio.h>
#include<String.h>
#include<stdlib.h>
#include<windows.h>
main(){
int label1;;	
char username[6],s[6]={"ssuet"};
int password,pass=1234;

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
if(strcmp(username,s)==0 && password==pass)
 {
 system("cls");
 printf("\n\nLOGIN SUCCESSFULL");
 }
 else
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
 printf("\n\n\n\n\n\n\t\tLoading Your Profile");
}
getch();
}
}













