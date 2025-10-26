/*4.4. The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.*/
#include <stdio.h>
int main() 
{
       printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
       printf("\n---------------------------\n");
    float population = 100000;
    float rate = 0.10;
    int year;

    printf("Initial population: 100000\n");
    printf("\nYearly population growth over 10 years:\n");

    for (year = 1; year <= 10; year++) {
        population = population + (population * rate);
        printf("End of Year %d: %.2f\n", year, population);
    }
    getch();
    return 0;
}
