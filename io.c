#include <stdio.h>

int main(){
    int age;
    char sesso;
    printf("inserisci la tua età: ");
    scanf(" %d", &age);
    printf("inserisci il tuo sesso:\nM (Maschio) | F (Femmina) | N (Preferisco non specificare): ");
    scanf( " %s", &sesso);
    printf("Hai %d anni e hai inserito %c\n", age, sesso);
    return 0;
}