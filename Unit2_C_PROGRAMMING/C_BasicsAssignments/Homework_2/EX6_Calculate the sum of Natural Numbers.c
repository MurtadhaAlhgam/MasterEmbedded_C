/*
 ============================================================================
 Name        : Calculate the sum of Natural Numbers.c
 Author      : Murtadha Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, count, sum=0;
	printf("Enter an integer: ");

	scanf("%d",&n);

	count=1;

	while(count<=n){
	sum+=count;
	++count;
	}
	printf("sum = %d", sum);
	return EXIT_SUCCESS;
}
