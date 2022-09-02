/*
 ============================================================================
 Name        : Swap_Two_Numbers_Without_Temp_Variable.c
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
	printf("Enter value of x:");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of y:");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&y);

	x = x + y ;
	y = x - y ;
	x = x - y ;

	printf("\r\nAfter swapping, the value of x = %f \n",x);
	printf("After swapping, the value of y = %f",y);

	return EXIT_SUCCESS;
}
