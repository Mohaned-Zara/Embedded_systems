/*
 ============================================================================
 Name        : Homework3.c
 Author      : MOHANED ZARA
 Description : Unit 2 C-Progtamming // Assignment 3 C-Basic // Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//### Copy of Homework 3 ###

int main()
{
//Ex1: write a c program to find the frequency of characters in a string:

	printf("Enter a string: ");
	fflush(stdout);
	char str[100];
	gets(str);
	fflush(stdin);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	char chr;
	scanf("%c",&chr);
	fflush(stdin);
	int b=0;
	for (int i = 0; i < 100; i++)
	{
		if (str[i]==chr)
		{
			b++;
		}
	}
	printf("frequency of %c = %d",chr,b);
	fflush(stdout);

    return 0;
}