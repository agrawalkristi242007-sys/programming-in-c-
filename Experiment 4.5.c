/*4.5. Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
Example of Ramanujan number: 1729*/

#include <stdio.h>

int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
    printf("\n---------------------------\n");
    int a, b, c, d;
    int L = 20;
    int n1, n2;

    printf("Ramanujan numbers up to limit %d:\n", L);

    for (a = 1; a <= L; a++) {
    for (b = a + 1; b <= L; b++) {
         n1 = a * a * a + b * b * b;
    for (c = a + 1; c <= L; c++) {
    for (d = c + 1; d <= L; d++) {
    n2 = c * c * c + d * d * d;
    if (n1 == n2) {
    printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n1, a, b, c, d);
}
}
}
 }
 }
  getch();
  return 0;
}
