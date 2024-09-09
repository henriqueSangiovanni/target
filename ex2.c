#include <stdio.h>
#include <string.h>
#define MAX_CHAR 200

int main(){
    char texto[MAX_CHAR];
    int i, numA = 0;

    printf("Digite o texto: ");
    //uso do gets pois o programa não trata de dados sensíveis
    gets(texto);

    for(i=0; i<strlen(texto); i++){
        if(texto[i] == 'A' || texto[i] == 'a')
            numA++;
    }

    printf("A letra 'a' aparece %d vezes no texto digitado.", numA);
    

    return 0;
}