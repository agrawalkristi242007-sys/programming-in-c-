/*Experiment 1: Installation, Environment Setup and starting with C language
4 Write a C program of arthimetic operation, take number from user.
*/
#include<stdio.h>
int main()
{
	printf("Name-krishtiagrawal\n SAP ID-590025883\ncourse-BSC CS\BATCH-B1\n");
  printf("\n---------------------------\n");
	int sum=0,a,b,c,d,subtract;
	float multi,e,f;
    float x,g,h;
	printf("ADDITION OF a AND b");
	scanf("%d" "%d",&a, &b);
	sum=a+b;
	printf("%d\n",sum);
    printf("SUBTRACTION OF c AND d");
	scanf("%d" "%d",&c, &d);
	subtract=c-d;
	printf("%d\n",subtract);
	printf("MULTIPLICATION OF e AND f");
	scanf("%f" "%f",&e, &f);
	multi=e*f;
	printf("%f\n",multi);
    printf("DIVISION OF g AND h");
	scanf("%f" "%f",&g, &h);
    x= g / h;
    printf("%f\n",x);
	getch();
	return 0;
	
	
}
