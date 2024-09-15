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

//Ex8: write a c program to make simple calc
printf("choose your operator:\n");
printf(" ( (1)--> + ) \n");
printf(" ( (2)--> / ) \n");
printf(" ( (3)--> * ) \n");
printf(" ( (4)--> - ) \n");
printf("enter the operation number: \n");
int op;
fflush(stdout);
scanf("%d",&op);
printf("enter the numbers: ");
float num1,num2;
fflush(stdout);fflush(stdin);
scanf("%f %f",&num1,&num2);

switch (op)
{
case 1:
    printf(" %.1f + %.1f = %.1f",num1,num2, num1+num2);
    break;
case 2:
    printf(" %.1f / %.1f = %.1f",num1,num2, num1/num2);
    break;
case 3:
    printf(" %.1f * %.1f = %.1f",num1,num2, num1*num2);
    break;
case 4:
    printf(" %.1f - %.1f = %%.1f",num1,num2, num1-num2);
    break;
default:
printf(" choose the right operator ");
    break;
}

    return 0;
}