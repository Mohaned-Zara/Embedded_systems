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
    
// EX6: Write Source Code to Swap Two Numbers
printf("---------------------------\n");
float a,b,temp;
printf("Enter value of a: ");
scanf("%f",&a);
printf("Enter value of b: ");
scanf("%f",&b);
temp=a;
a=b;
b=temp;
printf("After swapping, value of a = %.2f\n",a);
printf("After swapping, value of b = %.2f\n",b);

return 0;
}  