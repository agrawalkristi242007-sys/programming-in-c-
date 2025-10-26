/*5.4. Declare a static local variable inside a function. Observe how its value persists across function calls.*/
#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}

int main() 
{
   printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n---------------------------\n");
    counter();
    counter();
    counter();
    getch();
    return 0;
}
