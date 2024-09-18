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
//Ex4: power of number using recursion
int calcpower(int,int);
int base,power;
int main()
{
printf("Enter base number: ");
scanf("%d",&base);
printf("Enter power number(positive): ");
scanf("%d",&power);
int res=calcpower(base,power);
printf("%d^%d = %d\n",base,power,res);
    return 0;
}

int calcpower(int base , int power)
{
    int p=power;
if (p != 0)
return base * calcpower(base, power-1);
else
return 1;

}