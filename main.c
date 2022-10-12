#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;
	int space;
	
	while(num < 5){
		space = 0;
		
		while(space <= num){
			printf("*");
			space = space + 1;
	
		}
		
		printf("\n");	
		num = num + 1;
	}
	
	num = num - 1;
	
	while(num > 0){
		space = 0;
		
		while(space < num){
			printf("*");
			space = space + 1;
	
		}
		
		printf("\n");	
		num = num - 1;
	}
	
	return 0;
}
