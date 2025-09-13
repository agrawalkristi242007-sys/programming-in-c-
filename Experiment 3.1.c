/*Experiment 3: Conditional Statements
3.1.Write a C program to check whether a number is Even or ODD*/
#include <stdio.h>
int main() 
{
   printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n------------------------------------------\n");
     int n;
        printf("Enter an integer: ");
    scanf("%d", &n);

    
      if (n%2==0) 
    {
        printf("%d is Even.\n", n);
    } else 
    {
        printf("%d is Odd.\n", n);
    }
    getch();
    return 0;
}
