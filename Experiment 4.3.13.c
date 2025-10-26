/*4.3.13 Different type of pattern */
#include <stdio.h>
int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n------------------------------------------\n");   
    int i, j;
    for(i = 1; i <= 5; i++) 
    {          // Loop for rows
        for(j = 5; j >= i; j--) 
        {     
            printf("%d", j);
        }
        printf("\n");                  
    }
    getch();
    return 0;
}
