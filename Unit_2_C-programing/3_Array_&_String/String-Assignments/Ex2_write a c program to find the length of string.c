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
// Ex2: write a c program to find the length of string:
	
	printf("Enter a string: ");
	fflush(stdout);
	char str[100];
	gets(str);
	fflush(stdin);
	int i=0;
	int len=0;
	while (str[i] != 0)
	{
		len++;
		i++;
	}
	printf("length of string = %d ",len);
	fflush(stdout);

    return 0;
}