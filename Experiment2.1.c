/*Experiment 2: Operators
  /* Experiment 2: Operators
    1. WAP a C program to calculate the area and perimeter of a rectangle based on its
     length and width */
#include<stdio.h>
int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
     printf("\n---------------------------\n");
    float length, width, a, p;

    printf("Enter the length of the rectangle");
    scanf("%f", &length);
    printf("Enter the width of the rectangle");
    scanf("%f", &width);
    a= length * width;
    p= 2 * (length + width);
  printf("\nArea of the rectangle = %.2f\n", a);
    printf("Perimeter of the rectangle = %.2f\n", p);
    getch();
  
}
