/*4.3.4 Different type of pattern */
#include <stdio.h>
int main() 
{
 printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");  
printf("\n--------------------------------\n");
    int i, j;
    for(i=1; i<=5; i++) 
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
