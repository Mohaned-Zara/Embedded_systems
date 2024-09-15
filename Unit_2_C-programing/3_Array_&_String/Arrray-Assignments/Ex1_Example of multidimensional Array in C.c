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
// Ex1: Example of multidimensional Array in c:

	float first_matrix[2][2];
	float secound_matrix[2][2];
	printf("enter the elements of 1st matrix\n");
	fflush(stdout);
	for(int i=1;i<=2;i++)
	{
		for(int j =1 ; j<=2;j++)
		{
			printf("enter a%d%d: ",i,j);
			fflush(stdout);
			scanf("%f",&first_matrix[i][j]);
			fflush(stdin);
		}
	}
	printf("\n");
	fflush(stdout);
	printf("enter the elements of 2nd matrix\n");
	fflush(stdout);
	for(int i=1;i<=2;i++)
	{
		for(int j =1 ; j<=2;j++)
		{
			printf("enter b%d%d: ",i,j);
			fflush(stdout);
			scanf("%f",&secound_matrix[i][j]);
			fflush(stdin);
		}
	}
	printf("\n");
	fflush(stdout);
//The summation
	float sum_matrix[2][2];
	for (int i =1; i <=2; i++)
	{
		for (int j =1; j <=2; j++)
		{
			sum_matrix[i][j] = first_matrix[i][j] + secound_matrix[i][j];
		}
	}
//printing the sum_array
	printf("sum of matrices\n");
	fflush(stdout);
	for (int i =1; i <=2; i++)
	{
		for (int j =1; j <=2; j++)
		{
			printf("%.1f ",sum_matrix[i][j]);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}

    return 0;
}