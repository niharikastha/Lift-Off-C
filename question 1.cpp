#include<stdio.h>
int main()
{
    int p, q;
    int sum, sub, mul, mod;
    float div;

    printf("Enter any two numbers:\n");
    scanf("%d%d", &p, &q);

    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;

    printf("\nSUM :  %d", sum);
    printf("\nDIFFERENCE : %d", sub);
    printf("\nPRODUCT   :  %d", mul);
    printf("\nQUOTIENT : %f", div);
    printf("\nMODULUS : %d", mod);
return 0;
}

