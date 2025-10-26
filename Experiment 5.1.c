/*5.1. Declare a global variable outside all functions and use it inside various functions to understand its accessibility.*/
#include <stdio.h>
int count = 0;

void increment() 
{
    count++;
    printf("Count after increment: %d\n", count);
}

void decrement() 
{
    count--;
    printf("Count after decrement: %d\n", count);
}

int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n---------------------------\n");
    printf("Initial count: %d\n", count);
    increment();
    increment();
    decrement();
    printf("Final count in main: %d\n", count);
    getch();
    return 0;
}
