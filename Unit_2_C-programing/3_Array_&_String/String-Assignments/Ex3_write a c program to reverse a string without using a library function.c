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
// Ex3: write a c program to reverse a string without using a library function:
	
	printf("Enter the string: ");
	fflush(stdout);
	char str[100];
	gets(str);
	fflush(stdin);
	int len=strlen(str);
	int b= len-1;
	char rev[100];
	for (int i = 0 ; i < len ; i++)
	{
		rev[i]=str[b];
		b--;
	}
	printf("Reverse string is : %s\n",rev);

    return 0;
}