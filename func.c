#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "main.h"

void copia(covid19 fonte, covid19* destino){
    strcpy(
    destino->pais         , fonte.pais);
    destino->casos        = fonte.casos;
    destino->recuperados  = fonte.recuperados;
    destino->obitos       = fonte.obitos;
    destino->casos_ativos = fonte.casos_ativos;
    destino->prox         = fonte.prox;
}
void imprime(covid19 c){
    printf("Pais: %s\nNumero Total de casos: %d\nRecuperados: %d\nObitos: %d\nAtivos: %d\nProx: %d",
            c.pais,
            c.casos,
            c.recuperados,
            c.obitos,
            c.casos_ativos,
            c.prox
    );
}



bool criarLista(Lista* lista) {
    if(*lista == NULL){
        *lista = (Lista)malloc(sizeof(Lista));
        return true;
    }
    return false;
}


void inserir_no_Fim(Lista* lista, covid19 dados) {
    if ( criarLista(&*lista) == true ){
        puts("Lista criada.");
        return;
    }
    puts("Erro ao criar lista. não foi possivel inserir o dado.");

}