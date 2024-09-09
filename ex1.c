#include <stdio.h>

//protótipos funções
int verificaFibonacci(int num);

int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(verificaFibonacci(num))
        printf("O numero %d pertence a sequencia de Fibonacci.", num);
    else
        printf("O numero %d nao pertence a sequencia de Fibonacci.", num);
    return 0;
}

//funções
int verificaFibonacci(int num){
    int pertence = 0, termo = 1, anterior = 0, temporario;

    if(num == 0 || num == 1)
        pertence = 1;

    while(termo <= num){
        temporario = termo;
        termo = termo + anterior;
        anterior = temporario;
        if(termo == num)
            pertence = 1;
    }
    return pertence;
}