#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    printf("scrivi la lunghezza del primo lato\n");
    scanf("%d", &num1);
    printf("scrivi la lunghezza del secondo lato\n");
    scanf("%d", &num2);
    printf("scrivi la lunghezza del terzo lato\n");
    scanf("%d", &num3);

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1)
    {
        printf("sono lati di un triangolo\n");
    }

    else
    {
        printf("non sono lati di un triangolo\n");
    }



}