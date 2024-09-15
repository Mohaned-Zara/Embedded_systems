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
//	Ex5: write a c program to search an element in array:

	int n;
	printf("enter no of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i]=(i+1)*11;
	}
//printing the elements:
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
		fflush(stdout);
	}
	printf("\n");
	fflush(stdout);
	int sr;
	printf("enter the elements to be searched: ");
	fflush(stdout);
	scanf("%d",&sr);
	fflush(stdin);
	for (int i = 0; i < n; i++)
	{
		if(arr[i]==sr)
		{
			printf("number found at the location = %d\n",i+1);
			fflush(stdout);
		}
	}

    return 0;
}