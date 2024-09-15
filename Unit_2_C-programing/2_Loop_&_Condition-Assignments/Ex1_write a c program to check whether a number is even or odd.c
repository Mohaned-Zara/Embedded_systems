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
//Ex1: write a c program to check whether a number is even or odd
    printf("Enter your number: ");
    int num;
    fflush(stdout);
    scanf("%d", &num);
    if ( num%2 == 0)
        printf("the number %d is even\n", num);
    else
        printf("the number %d is odd\n", num);
    return 0;
}