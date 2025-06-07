#include <stdio.h>
int main() {
    
    int Bispo = 1;
    int Torre = 1;
    int Rainha = 1;

    for (;Bispo <= 5; Bispo++){

    printf ("Bispo moveu uma casa para Cima/Direita!\n", Bispo);
   
    }

    printf ("\n");   
    
    while (Torre <= 5)
    {
    printf ("Torre moveu uma casa para a direita!\n", Torre);
    Torre++;
    }

    printf ("\n");   


    do {

        printf ("Rainha moveu uma casa para a esquerda!\n", Rainha);
        Rainha++;
    
    } while (Rainha <= 8);

    return 0;
}
