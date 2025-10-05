/*4.1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.*/
#include <stdio.h>
int main()
 {
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
     printf("\n---------------------------\n");
    int number;
    int p= 0, n= 0, z= 0;
    char choice;
do
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0)
            p++;
        else if (number < 0)
            n++;
        else
            z++;

        printf("Do you want to enter another number (y/n): ");
        scanf(" %c", &choice); 
    } 
      while (choice == 'y' || choice == 'Y');
     printf("\nCount of Positive numbers: %d", p);
     printf("\nCount of Negative numbers: %d", n);
     printf("\nCount of Zero: %d\n", z);
   getch();
    return 0;
    
}
