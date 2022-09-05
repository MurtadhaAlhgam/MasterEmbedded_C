/*
 ============================================================================
 Name        : Checking POS/NEG numbers.c
 Author      : Murtadha Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;

	printf("Enter a number:");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&num);

	if(num < 0)
	printf("%.2f is negative.",num);

	else if (num > 0)
	printf("%.2f is positive.",num);

	else
	printf("You entered zero.");
	return EXIT_SUCCESS;
}
