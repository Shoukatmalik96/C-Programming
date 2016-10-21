#include<stdio.h>
#include<conio.h>
main(){
	
FILE *f;

f=fopen(" File.docx","w");
int math,phys,chem,eng,urdu,islam,obt,total;
float perct;
char grade;
math =70;
phys =65;
chem =76;
urdu =80;
eng  =60;
islam =68;
total= 600;
obt =math+phys+chem+eng+urdu+islam;
perct = obt / 6;
fprintf(f,"\n This is First Line ");
fprintf(f,"\n\t\tMarks Sheet");
fprintf(f,"\n--------------------------------------------------------------");
fprintf(f,"\n SUBJECT                         MARKS                     STATUS");
fprintf(f,"\n--------------------------------------------------------------");
fprintf(f,"\n Math                             %d                        Pass",math);	
fprintf(f,"\n Phyiscs                         %d                        Pass",phys);		
fprintf(f,"\n Chemistry                       %d                       Pass",chem);		
fprintf(f,"\n English                             %d                        Pass",eng);		
fprintf(f,"\n Urdu                                %d                       Pass",urdu);		
fprintf(f,"\n Islamiat                            %d                       Pass",islam);
fprintf(f,"\n--------------------------------------------------------------");		
fprintf(f,"\n Total Marks                          %d ",total);
fprintf(f,"\n Obtained Marks                       %d ",obt);
fprintf(f,"\n--------------------------------------------------------------");
fprintf(f,"\n Grade          %c ",grade );	
	
	
	
}
