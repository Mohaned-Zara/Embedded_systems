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
//Ex4: program to program to store information of students using structre
#define number_of_std 10
struct students
{
    int roll;
    char name[10];
    float marks;
}std[10];
struct students writeStudent(int i);
struct students readStudent(int i);
void main()
{
    printf("Enter information of student:\n");   
    int i = 0;
    for (;;)
    {
        if (i==number_of_std)
            break;
        writeStudent(i);
        i++;
    }
//display
    printf("Displaying information:\n");
    int j = 0;
    for (;;)
    {
        if (j==number_of_std)
            break;
        readStudent(j);
        j++;
    }
}
struct students writeStudent(int i)
{
    printf("Enter name: ");
    scanf("%s", &std[i].name);
    printf("Enter rool number: ");
    scanf("%d", &std[i].roll);
    printf("Enter marks: ");
    scanf("%f", &std[i].marks);
    printf("\n");
}
struct students readStudent(int j)
{
    printf("name: %s\n",std[j].name);
    printf("ROll: %d\n",std[j].roll);
    printf("Marks: %.2f\n",std[j].marks);
}