#include <stdio.h>
#include <stdlib.h>
/*
Write a C program that reads two integers and checks if they are multiplied or not.
*/

int ex2 ()
{
	int x, y;
	printf("\nfirst number: ");
	scanf("%d",&x);
	printf("\nsecond number: ");
	scanf("%d",&y);
	
	if(x>y){
		int temp = 0;
		temp = x;
		x=y;
		y=temp;
		
	}
	if(y%x==0){
		printf("\nMutliplied\n");
	}
	else{
		printf("\nNot Multiplied\n");
		
	}
	return 0;
	
}
