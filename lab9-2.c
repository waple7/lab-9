#include <stdio.h>


int main()
{
    int i;
    int months, rate, sum;

    printf("months:");
    scanf_s("%d",&months);

    printf("interest rate:");
    scanf_s("%d",&rate);

    printf("initial sum:");
    scanf_s("%d",&sum);

    printf("monthly values:\n");
    for (i=1; i<months+1;i++)
    {
        sum = sum + sum*rate/100;
        printf("%d\n",sum);
    }

    return 0;

}