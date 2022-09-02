/*
 ============================================================================
 Name        : Swaping Two Numbers.c
 Author      : Murtadh Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x = 0 , y = 0 , temp;
	printf("Enter value of x:");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of y:");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&y);
	temp = x;
	x = y;
	y = temp;
	printf("\nAfter swapping, value of x = %f \n",x);
	printf("After swapping, value of y = %f",y);

	return EXIT_SUCCESS;
}
