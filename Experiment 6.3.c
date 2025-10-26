/*6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.*/
#include <stdio.h>
int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n---------------------------\n");
    int n, i, num, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }

    printf("Frequency of %d = %d\n", num, count);
    getch();
    return 0;
}
