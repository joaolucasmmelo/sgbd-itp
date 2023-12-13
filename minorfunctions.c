#include <ctype.h>
#include <stdio.h>
#include <string.h>

//Essa função trata o nome dado pelo usuário para o arquivo da tabela
void tratar_nome(char *nome, char *nome_tratado){
    int i, j=0;

    for (i = 0; i < 51; i++) {
        if(nome[i] == '\0' || nome[i] == '\n') {
            nome_tratado[j] = '\0';
            break;
        }

        if(nome[i] != 92 && nome[i] != 47 && nome[i] != 58 && nome[i] != 42 && nome[i] != 63
        && nome[i] != 34 && nome[i] != 60 && nome[i] != 62 && nome[i] != 124) {
            nome_tratado[j] = nome[i];
            j++;
        }
    }

    for(i = 0; i < j; i++){
        if(nome_tratado[i] == '\0') {
            break;
        }
        if(nome_tratado[i] >= 65 && nome_tratado[i] <= 90){
            nome_tratado[i] = (nome_tratado[i] + 32);
        }
    }
}
