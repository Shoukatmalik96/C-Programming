#include<stdio.h>
#include<conio.h>
main(){

int i,j,N,isprime ;
printf("\n  how many Prime Number do you want ?: ");
scanf("%d",&N);
for(i=2;i<=N;i++){
	isprime == 0;
	
	for (j=2; j<i/2; j++){
		
		if(i%j== 0){
			
			isprime = 1;
			break;
		}
	}
 if(isprime == 0)
 printf("\n %d ",i);
	
}


getch();
}
