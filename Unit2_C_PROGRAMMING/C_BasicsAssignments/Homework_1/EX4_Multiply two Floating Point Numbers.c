/*
 ============================================================================
 Name        : Multiply two Floating Point Numbers.c
 Author      : Murtadha Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x = 0 , y = 0;
	printf("Enter two numbers: "); /* prints !!!Hello World!!! */
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("Product: %f",x*y);
	return EXIT_SUCCESS;
}
