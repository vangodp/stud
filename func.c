#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


/*Função que Cria a Lista */
covid19* criarLista(covid19 dados) {
    /*criamos um novo Nó*/
    covid19 *novo = (covid19*)malloc(sizeof(covid19)); /*Permite alocar o conjunto de Bytes para a Lista*/

    /*Comprovamos se o nó apnta para a memoria reservada*/
    if(novo==NULL)
        return NULL;

    /* atribuimos os dados a novo*/
    strcpy(
    novo->pais         ,dados.pais);
    novo->casos        =dados.casos;
    novo->recuperados  =dados.recuperados;
    novo->obitos       =dados.obitos;
    novo->casos_ativos =dados.casos_ativos;
    novo->prox         =NULL;
    return novo;
}

/*Funçao que insere um nó no final da Lista*/
covid19* inserir_no_Fim(Lista* lista, covid19 dados) {
    covid19 *novo_no = criarLista(dados);

}