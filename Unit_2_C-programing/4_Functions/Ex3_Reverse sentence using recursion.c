/*
 ============================================================================
 Name        : Homework4.c
 Author      : MOHANED ZARA
 Description : Unit 2 C-Progtamming // Assignment 4 C-Basic // Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

//### Copy of Homework 4 ###
//Ex3: Reverse sentence using recursion

void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}