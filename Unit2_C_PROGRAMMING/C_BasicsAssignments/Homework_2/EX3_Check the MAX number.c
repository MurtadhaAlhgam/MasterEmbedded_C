/*
 ============================================================================
 Name        : Check the MAX number.c
 Author      : Murtadha Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b,c;
	printf("Enter three numbers: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);
	if (a>=b)
	{
	if(a>=c)
	printf("Largest number= %f",a);
	else
	printf("Largest number=%f",c);
	}
	else
	{
	if(b>=c)
	printf( "Largest number=%f",b);
	else
	printf("Largest number=%f",c);
	}
	return EXIT_SUCCESS;
}
