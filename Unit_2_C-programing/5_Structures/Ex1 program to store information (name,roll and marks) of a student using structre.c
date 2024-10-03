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
//Ex1: program to store information (name,roll and marks) of a student using structre

typedef struct
{
    char name[10];
    int roll;
    float marks;
}student;
student std;
student take_info(student* std);
student send_info(student std);
void main()
{
    take_info(&std);
    send_info(std);
}
student take_info(student* std)
{
    printf("Enter information of student:\n");
    printf("Enter name: ");
    scanf("%s", &std->name);
    printf("Enter rool number: ");
    scanf("%d", &std->roll);
    printf("Enter marks: ");
    scanf("%f", &std->marks);
}
student send_info(student std)
{
    printf("Displaying information:\n");
    printf("name: %s\n",std.name);
    printf("ROll: %d\n",std.roll);
    printf("Marks: %.2f\n",std.marks);
}