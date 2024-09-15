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

//Ex7: write a c program to calc factorial
printf("enter the number: ");
int numfac;
int sum=1;
fflush(stdout);
scanf("%d",&numfac);
if(numfac>0){
for (int i = 1; i <= numfac; ++i)
{
    sum *= i;    //sum = sum*i
}
printf("the sum is %d\n",sum);
}else{
	printf("Error!! factorial of negative number doesn't exist\n");
}
fflush(stdin);
printf("enter the number: ");
int numfac2;
int sum2=1;
fflush(stdout);
scanf("%d",&numfac2);
if(numfac2>0){
for (int i = 1; i <= numfac2; ++i)
{
    sum2 *= i;    //sum = sum*i
}
printf("the sum is %d\n",sum2);
}else{
	printf("Error!! factorial of negative number doesn't exist\n");
}

    return 0;
}