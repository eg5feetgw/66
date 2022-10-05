#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(void) {
  	int grade;
  	scanf("%d",&grade);
  	if(grade>100 | grade<0);
  	printf("請重新輸入");
	
  	
	switch(grade/10){
	
	    case 10:
		case 9:
		printf("A");
		break;
	
		case 8:
		printf("B");
		break;
	
		case 7:
		printf("C");
		break;
	
		case 6:
		printf("D");
		break;
		
	
		
		default:
		printf("E");
		break;
		
		
	}
	/*
	if(grade>=90 & grade<=100){
		printf("A");
	}
		
	if(grade>=80 & grade<=89){
	
		printf("B");
    }
	if(grade>=70 & grade<=79){
	
		printf("C");
	}	
	if(grade>=60 & grade<=69){
	
		printf("D");
	}
	if(grade<60){
	
		printf("E");
	}
	*/
	return 0;
}
