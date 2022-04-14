#include <iostream>

/* 
Write a C program that reads an integer and check the specified range where it belongs(0-20;21-50;51-80;).
 Print an error message if the number is negative and greater than 80.
*/

int main() {
	int number;
	scanf("%d",&number);
	
	if(number>=0 && number <= 20){
		printf("Range [0, 20]\n");
	}
	
	else if(number>20 && number <=50){
		printf("Range (20,50]\n");
	}
	
	else if (number > 50 && number <= 80){
		printf("Range (50,80]\n");
		}
		
	else {
		printf("Out of range\n");
	}
	return 0;
}
