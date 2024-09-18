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
//Ex2: calc the factorial using recursion

int fact(int);
int num;
int main()
{
printf("enter a postive ineger:");
scanf("%d",&num);
int frac = fact(num);
printf("fac is %d\n", frac);

return 0;
}

int fact(int num)
{
    if(num==1)
    return 1;
    else
    return num * fact(num-1);
}