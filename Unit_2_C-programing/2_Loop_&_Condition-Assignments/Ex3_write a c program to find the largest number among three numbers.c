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
// Ex3: write a c program to find the largest number among three numbers 
    float num1, num2, num3;
    printf("Enter three numbers:\n");
    fflush(stdout);
    scanf("%f %f %f",&num1,&num2,&num3);
    if(num1>num2 && num1 > num3)
    {
        printf("%.2f is the largest num\n", num1);
    }else if(num2>num1 && num2 >num3)
    {
        printf("%.2f is the largest num\n", num2);
    }else{
        printf("%.2f is the largest num\n", num3);
    }
    return 0;
}