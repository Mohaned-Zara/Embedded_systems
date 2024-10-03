/*
============================================================================
 Name        : Homework5.c
 Author      : MOHANED ZARA
 Description : Unit 2 C-Progtamming // Assignment 5 C-Basic // Ansi-style
============================================================================
*/

#include <stdio.h>
//### Copy of Homework 5 ###
// Ex5: program to area of circle, passnig arguments to macros
#define pi 3.14159
#define AreaOfCircle (pi*radius*radius)
float radius;
void main()
{
    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("Area:%.2f",AreaOfCircle);
}