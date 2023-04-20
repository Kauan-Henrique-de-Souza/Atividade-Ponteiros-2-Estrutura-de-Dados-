#include <stdio.h>

int main()
{
    int Meu_Vetor2434[7] = {};
    int i;
    
    printf("<----ENDEREÇOS---->\n");
    
    for(i = 0; i<7; i++ ){
        printf("\nEndereço %d :%p", i ,&Meu_Vetor2434[i]);
    }
     return 0;
}
