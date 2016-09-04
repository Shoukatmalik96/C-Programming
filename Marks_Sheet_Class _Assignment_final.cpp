#include<stdio.h>
#include<conio.h>
main(){
	
	
	int math, phys,chem, eng,urdu, Islam,obt,total;
	float percentage;
	char Grade;
	total=500;
	
	
	// Run time values of All subjects
	printf("\n Enter Math Marks :");
	scanf("\n %d",&math);
    printf("\n Enter Physics Marks :");
	scanf("\n %d",&phys);
	printf("\n Enter Chemistry Marks :");
	scanf("\n %d",&chem);
	printf("\n Enter English Marks :");
	scanf("\n %d",&eng);
	printf("\n Enter Urdu Marks :");
	scanf("\n %d",&urdu);
	printf("\n Enter Islamiat Marks :");
	scanf("\n %d",&Islam);
	
	// Calculating Total Marks
	obt=math+phys+chem+eng+urdu+Islam;
	// Calculating Percentage
	percentage= obt/total*100;
	
	
	// printing the marks of subjects
	printf("\n\t\t\tMARKS SHEET");
	printf("\n----------------------------------------------------------------------");
	if(phys>=35){
		
	printf("\nPhysics                             %d                             Pass",phys);
	 	
	}
    else{
    printf("\nPhysics                             %d                             Fail",phys);
	}
	if(math>=35){
		
	printf("\nMath                                %d                             Pass",math);
	 	
	}
    else{
    printf("\nMath                                %d                             Fail",math);
	}	
	if(chem>=35){
		
	printf("\nChemistry                           %d                             Pass",chem);
	 	
	}
    else{
    printf("\nChemistry                           %d                             Fail",chem);
	}	
	if(eng>=35){
		
	printf("\nEnglish                             %d                             Pass",eng);
	 	
	}
    else{
    printf("\nEnglish                             %d                             Fail",eng);
	}
	if(urdu>=35){
		
	printf("\nUrdu                                %d                             Pass",urdu);
	 	 
	}
    else{
    printf("\n Urdu                               %d                             Fail",urdu);
	}
	if(Islam>=35){
		
	printf("\nIslamiat                            %d                             Pass",Islam);
	 	
	}
    else{
    printf("\nIslamiat                            %d                             Fail",Islam);
    	
	}
	printf("\n------------------------------------------------------------------------");
	printf("\n TotalMarks                               %d",                           total);
	printf("\n Obtain Marks                             %d",                            obt);
	printf("\n-------------------------------------------------------------------------");
	
	
    //printing Grade and Percentage
	if(phys>=35 && chem>=35 && math>=35 && eng>=35 && urdu>=35 && Islam>=35 )
  	{
		
	printf("\n Percentage                           %f",                            percentage);
	// Calculating Grde of The Student
	if(percentage>80){
	printf("\n A One  Grade");
	}
	if(percentage>70 && percentage<=80){
	printf("\n A Grade");
    }
    if(percentage>60 && percentage<=70){
	printf("\n B Grade");
    }
    if(percentage>50 && percentage<=60){
	printf("\n C Grade");
    }
    if(percentage>40 && percentage<=50){
	printf("\n Fail");
    }
	
    getch();
		
	}				
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
