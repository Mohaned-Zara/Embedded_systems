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
    //Ex2: write a c program to check vowel or consonant
    printf("Enter an Alphabet: ");
    char alphabet;
    fflush(stdout);
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o')
        printf("%c is vowel\n", alphabet);
    else
        printf("%c is a consonant\n", alphabet);
    fflush(stdin);
    printf("Enter an Alphabet: ");
    char alphabet1;
    fflush(stdout);
    scanf("%c", &alphabet1);
    if (alphabet1 == 'a' || alphabet1 == 'e' || alphabet1 == 'i' || alphabet1 == 'o')
        printf("%c is vowel\n", alphabet1);
    else
        printf("%c is a consonant\n", alphabet1);
    return 0;
}