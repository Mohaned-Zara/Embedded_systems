/*
============================================================================
 Name        : Homework5.c
 Author      : MOHANED ZARA
 Description : Unit 2 C-Progtamming // Assignment 5 C-Basic // Ansi-style
============================================================================
*/

#include <stdio.h>
#pragma pack(1)
//### Copy of Homework 5 ###
//Ex3: program to add two complex numbers by passing structre
typedef struct Scom_num
{
    float real_num;
    float img_num;
}Scomplex_Number;
    Scomplex_Number gnum1;
    Scomplex_Number gnum2;
void enternumbers(Scomplex_Number*,Scomplex_Number*);
void sum(Scomplex_Number*,Scomplex_Number*);
void main()
{
    enternumbers(&gnum1,&gnum2);
    sum(&gnum1,&gnum2); 
}
void enternumbers(Scomplex_Number* gnum1,Scomplex_Number* gnum2)
{
    printf("for 1st complex number:\n");
    printf("Enter real & imaginary respectively: ");
    scanf("%f %f", &gnum1->real_num, &gnum1->img_num);
    printf("for 2nd comlex number:\n");
    printf("Enter real & imaginary respectively: ");
    scanf("%f %f", &gnum2->real_num, &gnum2->img_num);
}
void sum(Scomplex_Number* gnum1,Scomplex_Number* gnum2)
{
    printf("sum=%.1f+%.1fi",gnum1->real_num+gnum2->real_num,gnum1->img_num+gnum2->img_num);
}