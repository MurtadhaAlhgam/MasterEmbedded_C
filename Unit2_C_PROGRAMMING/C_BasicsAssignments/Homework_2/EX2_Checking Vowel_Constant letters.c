/*
 ============================================================================
 Name        : Checking Vowel_Constant letters.c
 Author      : Murtadha Alhgam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;
	printf("Enter an alphabet letter: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c", &c);
	if(c=='a'|| c=='A'|| c=='e'|| c=='E'|| c=='i'|| c=='I'|| c=='o'|| c=='O'|| c=='u'|| c=='U')
	printf("%c is a vowel.",c);
	else
	printf("%c is a consonant.",c);

	return EXIT_SUCCESS;
}
