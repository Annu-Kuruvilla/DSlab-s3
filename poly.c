#include <stdio.h>

typedef struct
{
    int coeff;
    int expo;
} polynomial;

int main()
{
    int size1, size2;
    printf("Enter the number of terms of both polynomials: ");
    scanf("%d %d", &size1, &size2);
    polynomial p1[size1], p2[size2], sum[size1 + size2];

    printf("Enter the coefficient and power of the polynomial 1 as coefficient first then power:\n");
    for (int i = 0; i < size1; i++)
        scanf("%d %d", &p1[i].coeff, &p1[i].expo);
    printf("Enter the coefficient and power of the polynomial 2 as coefficient first then power:\n");
    for (int i = 0; i < size2; i++)
        scanf("%d %d", &p2[i].coeff, &p2[i].expo);

    printf("Polynomial 1:\n");
    for (int i = 0; i < size1; i++)
       {
        printf("%dx^%d ", p1[i].coeff, p1[i].expo);
        if(i!=size1-1)
        printf("+");
        }
    printf("\n");
    printf("Polynomial 2:\n");
    for (int i = 0; i < size2; i++)
    {
        printf("%dx^%d ", p2[i].coeff, p2[i].expo);
        if(i!=size2-1)
        printf("+");
     }   
    printf("\n");

    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (p1[i].expo > p2[j].expo)
        {
            sum[k].expo = p1[i].expo;
            sum[k].coeff = p1[i].coeff;
            i++;
            k++;
        }
        else if (p1[i].expo < p2[j].expo)
        {
            sum[k].expo = p2[j].expo;
            sum[k].coeff = p2[j].coeff;
            j++;
            k++;
        }
        else
        {
            sum[k].expo = p1[i].expo;
            sum[k].coeff = p1[i].coeff + p2[j].coeff;
            k++;
            i++;
            j++;
        }
    }
    while (i < size1)
    {
        sum[k].expo = p1[i].expo;
        sum[k].coeff = p1[i].coeff;
        i++;
        k++;
    }
    while (j < size2)
    {
        sum[k].expo = p2[j].expo;
        sum[k].coeff = p2[j].coeff;
        j++;
        k++;
    }

    printf("Sum\n");
    for (int i = 0; i < k; i++){
        printf("%dx^%d ", sum[i].coeff, sum[i].expo);
        if(i!=k-1)
        printf("+");
        }
    printf("\n");

    return 0;
}


