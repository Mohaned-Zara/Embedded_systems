/*
 ============================================================================
 Name        : Homework2.c
 Author      : mohanedzara
 Description : Unit 2 C-Progtamming // Assignment 2 C-Basic // Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//### Copy of Homework 2 ###

int main()
{

// Ex6: write a c program to calculate sum of natural nums
printf("enter the number: ");
int n,i,sum=0; //n = i = sum = 0;
fflush(stdout);
scanf("%d",&n);
while (i<=n)
{
    sum+=i;     //sum=sum+i
    ++i;        //prefix
}
printf("sum is %d\n",sum);

    return 0;
}