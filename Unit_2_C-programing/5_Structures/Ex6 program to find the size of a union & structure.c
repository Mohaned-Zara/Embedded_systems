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
//Ex6: program to find the size of a union & structure
union Ujob
{
	char name [32] ;
	float salary;
	int worker_no;
}u;
struct Sjob
{
	char name [32];
	float salary;
	int worker_no;
}s;
void main ()
{
	printf ("Size of union= %d", sizeof (u));
	printf ("\nSize of structure= %d", sizeof (s));
}