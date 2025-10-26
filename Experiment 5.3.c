/*5.3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.*/
#include <stdio.h>

int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n---------------------------\n");
    int a = 10;
    printf("Outside block: a = %d\n", a);

    {
        int b = 20;
        printf("Inside first block: a = %d, b = %d\n", a, b);

        {
            int c = 30;
            printf("Inside nested block: a = %d, b = %d, c = %d\n", a, b, c);
        }
    }
    getch();
    return 0;
}
