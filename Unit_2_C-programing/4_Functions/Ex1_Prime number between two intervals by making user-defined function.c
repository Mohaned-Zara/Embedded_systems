/*
 ============================================================================
 Name        : Homework4.c
 Author      : MOHANED ZARA
 Description : Unit 2 C-Progtamming // Assignment 4 C-Basic // Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

//### Copy of Homework 4 ###
int checkPrimeNumber(int);
int main()
{

//Ex1: Prime number between two intervals by making user-defined function

int n1,n2,count;
printf("Enter two numbers(intervals):");
scanf("%d %d",&n1,&n2);
printf("prime number between %d and %d are:\n",n1,n2);
for (int i =n1; i <= n2; i++)
{
        if (n1 == 0 || n1 ==1)
    {
        printf("%d isn't prime.\n",n1);
        printf("please Enter a positive number > 1 \n",n1);
         break;
    }
    count = checkPrimeNumber(i);
    if (count == 0) 
    {
        printf("%d ",i);
    } 
}
    return 0;
}

int checkPrimeNumber(int n)
{
    int count = 0;
    for (int j =2; j <=n/2; j++)
    {
        if (n%2 == 0)
        {
            count =1;
            break;
        }
    }
    return count;
}
