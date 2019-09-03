#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void breakLine(){
    printf("\n");
}

void venceu(int soma){
    printf("A soma deu %d", soma);
    printf("\nVoce venceu!!!");
}

void perdeu(int soma){
    printf("A soma deu %d", soma);
    printf("\nVoce perdeu!!! :-(");
}

int main(){
    printf("***Par ou Impar");
    breakLine();
    printf("Selecione 'P' para Par ou 'I' para Impar...  ");

    char paridade;
    scanf("%c", &paridade);
    if(paridade != 'P' && paridade != 'p' && paridade != 'I' && paridade != 'i'){
        printf("Favor inserir um valor valido!");
        return 1;
    }

    breakLine();
    printf("Selecione um numero natural...  ");

    int usuario;
    scanf("%d", &usuario);
    if(usuario < 0){
        printf("Favor inserir um numero positivo");
        return 1;
    }

    srand(time(NULL));
    int computador = rand() % 100;
    breakLine();
    printf("O seu adversario escolheu %d", computador);
    breakLine();

    int resultado = usuario + computador;

    if(paridade == 'p' || paridade == 'P'){
        if(resultado % 2 == 0){
            venceu(resultado);
        }
        else{
            perdeu(resultado);
        }
    }
    else{
        if(resultado % 2 == 1){
            venceu(resultado);
        }
        else{
            perdeu(resultado);
        }
    }
    return 0;
}
