#include <stdio.h>
#include <math.h>

//### Copy of Homework 4 ###
int n1,n2,count=0;

int main()
{
//Ex1: Prime number between two intervals by making user-defined function
printf("Enter two numbers (intervals):");
scanf("%d %d",&n1,&n2);
if (n1 == 0 || n1 ==1)
{
    printf("%d isn't prime.",n1);
}

int val1=ceil(sqrt(n1));
int val2=ceil(sqrt(n2));
//is n1 prime or not:
for(int i=2; i<=val1; i++)
{
    if (n1%i!=0)
    {
        printf("%d is prime.",n1);
    }
}
//is n2 prime or not:
for(int i=2; i<=val2; i++)
{
    if (n2%i!=0)
    {
        printf("%d is prime.",n2);
    }
}

int ptr= n1+1;
for (int i = 2; i <=ceil(sqrt(ptr)); i++)
{
    if (ptr%2!=0)
    {
        printf("%d is prime",ptr);
    }
    
}


    return 0;
}

