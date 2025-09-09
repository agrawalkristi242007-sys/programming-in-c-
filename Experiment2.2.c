/*Experiment 2: Operators
2.WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32. */
#include<stdio.h>
int main()
{      
      printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
       printf("\n---------------------------\n");

    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("\nTemperature in Fahrenheit = %.2f\n", fahrenheit);
    getch();
    return 0;
}
