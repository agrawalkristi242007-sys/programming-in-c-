/*4.3.9 Different type of pattern */
#include <stdio.h>
int main() 
{
 printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");    
printf("\n------------------------------------------\n"); 
    int i, j;
    
    for(i=5; i>=1; i--) {
        for(j=5; j>=i; j--) printf("%d ", j);
        for(j=i+1; j<=5; j++) printf("%d ", j);
        printf("\n");
    }
    
    for(i=2; i<=5; i++) {
        for(j=5; j>=i; j--) printf("%d ", j);
        for(j=i+1; j<=5; j++) printf("%d ", j);
        printf("\n");
    }
    getch();
    return 0;
}
