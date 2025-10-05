/*3.6. WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.*/

#include <stdio.h>

int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n--------------------------------\n");
    int a1, b1, a2, b2, a3, b3;
    int p1, p2, p3, max;

    
    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%d %d", &a1, &b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%d %d", &a2, &b2);

    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%d %d", &a3, &b3);

    
    p1 = 2 * (a1 + b1);
    p2 = 2 * (a2 + b2);
    p3 = 2 * (a3 + b3);

    
    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    printf("\nPerimeter of Rectangle 1 = %d", p1);
    printf("\nPerimeter of Rectangle 2 = %d", p2);
    printf("\nPerimeter of Rectangle 3 = %d", p3);

    printf("\n\nHighest perimeter = %d\n", max);

   
     getch();

    return 0;
}
