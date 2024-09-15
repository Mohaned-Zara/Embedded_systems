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
//Ex4: write a c program to check postiive and negative numbers

    printf("enter your number:\n");
    float ex4;
    fflush(stdout);
    scanf("%f",&ex4);
    if(ex4>0)
    {
        printf("%0.2f is positive\n", ex4);
    }else if(ex4<0)
    {
        printf("%0.2f is negative\n", ex4);
    }else{
        printf("you entered a ZERO!\n");
    }
    fflush(stdin);
    printf("enter your number:\n");
    float ex14;
    fflush(stdout);
    scanf("%f",&ex14);
    if(ex14>0)
    {
        printf("%0.2f is positive\n", ex14);
    }else if(ex14<0)
    {
        printf("%0.2f is negative\n", ex14);
    }else{
        printf("you entered a ZERO!\n");
    }
    return 0;
}