#include <stdio.h>
int main()
{
    char sesso;

    printf("utente inserisci il tuo sesso: ");
    scanf("%c", &sesso); 
    if(sesso == 'M')
    {
        printf("ti cresce la barba\n");
    }
    else if(sesso == 'F')
    {
        printf("non ti cresce la barba\n");
    }
    else if(sesso == 'N')
    {
        printf("no identification?\n");
    }
    else
    {
        printf("error 404: gender not found\n");
    }
}