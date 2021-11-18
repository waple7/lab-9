#include <stdio.h>

 int main()
{
    char a[1000] ;
    int Number = 0, Higher = 0, Under = 0;

    printf("string:");
    scanf("%s",&a);

    for (int n = 0; n < sizeof(a) ; n++)
    {

        if (a[n] >= '0' && a[n] <= '9') Number++;
        else if (a[n] >= 'A' && a[n] <= 'Z') Higher++;
        else if (a[n] >= 'a' && a[n] <= 'z') Under++;

    }

    printf("\n Number = %d",Number);
    printf("\n Higher = %d",Higher);
    printf("\n Under = %d",Under);



    return 0;
}