#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void breakLine(){
    printf("\n");
}

void venceu(){
    printf("\nVoce venceu!!!");
}

void empatou(){
    printf("\nVoce Empatou!!!");
}

void perdeu(){
    printf("\nVoce perdeu!!! :-(");
}

char processaJogada(int jogada){
    if(jogada == 0){
        return 'P';
    }
    else if(jogada == 1){
        return 'A';
    }
    else if(jogada == 2){
        return 'T';
    }
}

int main(){
    printf("***Pedra Papel Tesoura  v.5.0 :*");
    breakLine();
    printf("Selecione sua jogada!!!");
    printf("\nP - Pedra");
    printf("\nA - Papel");
    printf("\nT - Tesoura");
    breakLine();


    char objeto;
    scanf("%c", &objeto);
    if(objeto != 'P' && objeto != 'p' && objeto != 'A' && objeto != 'a' && objeto != 'T' && objeto != 't'){
        printf("Favor inserir um valor valido!");
        return 1;
    }

    srand(time(NULL));
    int computador = rand() % 3;
    //0 - Pedra
    //1 - Papel
    //2 - Tesoura

    char jogadaComputador = processaJogada(computador);
    breakLine();
    printf("O seu adversario escolheu %c", jogadaComputador);
    breakLine();


    if(objeto == 'P' || objeto == 'p'){
        if(jogadaComputador == 'T'){
            venceu();
        }
        else if(jogadaComputador == 'P'){
            empatou();
        }
        else if(jogadaComputador == 'A'){
            perdeu();
        }
    }
    else if(objeto == 'A' || objeto == 'a'){
        if(jogadaComputador == 'P'){
            venceu();
        }
        else if(jogadaComputador == 'A'){
            empatou();
        }
        else if(jogadaComputador == 'T'){
            perdeu();
        }
    }
    else if(objeto == 'T' || objeto == 't'){
        if(jogadaComputador == 'A'){
            venceu();
        }
        else if(jogadaComputador == 'T'){
            empatou();
        }
        else if(jogadaComputador == 'P'){
            perdeu();
        }
    }


    return 0;
}
