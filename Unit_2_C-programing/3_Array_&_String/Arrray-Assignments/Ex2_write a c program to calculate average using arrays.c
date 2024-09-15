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
//Ex2: write a c program to calculate average using arrays:
	int a;
	printf("enter the numbers of data: ");
	fflush(stdout);
	scanf("%d",&a);
	fflush(stdin);
	float nums[a];
	for (int i = 0; i < a; i++)
	{
		printf("enter the number: ");
	fflush(stdout);
		scanf("%f",&nums[i]);
	fflush(stdin);
	}
	float b=0;
	for (int i = 0; i < a; i++)
	{
		b+=nums[i];
	}
	float avg=b/a;
	printf("average %.2f",avg);
	fflush(stdout);

    return 0;
}