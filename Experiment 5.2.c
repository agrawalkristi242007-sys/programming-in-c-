/*5.2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.*/
#include <stdio.h>

int globalVar = 10;

void display() 
{
    int localVar = 20;
    printf("Inside function:\n");
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
}

int main()
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n---------------------------\n");
    display();
    printf("\nIn main function:\n");
    printf("Global variable = %d\n", globalVar);
    getch();
    return 0;
}
