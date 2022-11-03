#include <stdio.h>
#include <math.h>

typedef struct
{
    int coeff;
    int expo;
} polynomial;

int main()
{
    int size, x, result = 0;
    printf("Enter the number terms of the polynomial: ");
    scanf("%d", &size);
    polynomial p[size];

    printf("Enter the coefficient and power of the polynomial as coefficient first then power:\n");
    for (int i = 0; i < size; i++)
        scanf("%d %d", &p[i].coeff, &p[i].expo);

    printf("Substitute value of x for ");
     scanf("%d", &x);
     printf("Entered polynomial is:\n");
    for (int i = 0; i < size; i++)
       {
        printf("%dx^%d ", p[i].coeff, p[i].expo);
         if(i!=size-1)
        printf("+");
    printf("\n");
   }

    for (int i = 0; i < size; i++){
        result += p[i].coeff * pow(x, p[i].expo);
         if(i!=size-1)
        printf("+");
         }
    printf("Substituted polynomial is = %d\n", result);

    return 0;
}
