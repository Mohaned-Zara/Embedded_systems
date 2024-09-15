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

//Ex5: write a c program to check character alphabet or not
char ch;
printf("Enter a character:");
fflush(stdout);
scanf("%c", &ch);
if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("%c is an alphabet\n", ch);
else
    printf("%c is not an alphabet\n", ch);
fflush(stdin);
printf("Enter a character:");
fflush(stdout);
scanf("%c", &ch);
if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("%c is an alphabet\n", ch);
else
    printf("%c is not an alphabet\n", ch);
    return 0;
}
