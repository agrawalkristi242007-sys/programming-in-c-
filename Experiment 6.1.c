/*6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.*/
#include <stdio.h>

int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n---------------------------\n");
    int n, i, largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest number = %d\n", second);
    getch();
    return 0;
}
