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
// Ex4: write a c program to insert element in array:
	int n;
	printf("enter no of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i]=i+1;
	}
//printing the elements:
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
		fflush(stdout);
	}
	printf("\n");
	fflush(stdout);
	int b=n+1; //new size
//ask for element:
	printf("enter the element to be inserted: ");
	fflush(stdout);
	int ins;
	scanf("%d",&ins);
	fflush(stdin);
//select the location:
	printf("enter the 'location': ");
	fflush(stdout);
	int loc;
	scanf("%d",&loc);
	fflush(stdin);
	for(int i = n; i >= loc; i--)
	{
		arr[i]=arr[i-1];        //arr[i+1]=arr[i] -> dosen't work!!
	}
	arr[loc-1]=ins;
//printing the elements:
	for (int i = 0; i < b; i++)
	{
		printf("%d ",arr[i]);
		fflush(stdout);
	}

    return 0;
}