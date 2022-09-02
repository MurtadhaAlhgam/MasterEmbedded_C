/*
 ============================================================================
 Name        : Find ASCII Value of a Character.c
 Author      : Murtadha Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x = 0;
	printf("Enter a character: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of (%c) = %d",x,x);
	return EXIT_SUCCESS;
}
