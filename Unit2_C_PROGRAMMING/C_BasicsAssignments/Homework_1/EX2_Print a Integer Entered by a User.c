/*
 ============================================================================
 Name        : Print a Integer Entered by a User.c
 Author      : Murtadha Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0 ;
	printf("Enter an integer : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);
	printf("You Entered : %d",x);
	return EXIT_SUCCESS;
}
