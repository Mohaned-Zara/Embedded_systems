/*
 ============================================================================
 Name        : Homework1.c
 Author      : mohanedzara
 Description : Unit 2 C-Progtamming // Assignment 1 C-Basic // Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//### Copy of Homework 1 ###

int main()
{
    
//! EX7: it is an interview trick
//       Write Source Code to Swap Two Numbers without temp variable
printf("---------------------------\n");
float a1,b1;
printf("Enter value of a1: ");
scanf("%f",&a1);
printf("Enter value of b1: ");
scanf("%f",&b1);
a1=a1-b1;
b1=a1+b1;
a1=b1-a1;  //(a1+b1)-a1

printf("After swapping, value of a1 = %.2f\n",a1);
printf("After swapping, value of b1 = %.2f\n",b1);

return 0;
}  