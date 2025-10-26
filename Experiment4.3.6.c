/*4.3.6 Different type of pattern */
#include <stdio.h>
int main() 
{
 printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
printf("\n------------------------------------------\n"); 
    int i, j;
    for(i=5; i>=1; i--) 
    {
        for(j=i; j>=1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
