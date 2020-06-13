#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/*Imforma��es sobre CORONAV�RUNS(COVID-19)*/
void InformacaoCovid() {
    system("COLOR 0F");
    printf("\nA Organiza��o Mundial da Sa�de (OMS) declarou,em 30 de janeiro de 2020,\nque o surto da doen�a causada pelo novo coronav�rus (COVID-19)\n");
    printf("constitui uma Emerg�ncia de Sa�de P�blica de Import�ncia Internacional � o mais alto n�vel de alerta da\n");
    printf("Organiza��o, conforme previsto no Regulamento Sanit�rio Internacional.\n");
    printf("\tEm 11 de mar�o de 2020, a COVID-19 foi caracterizada pela OMS como uma pandemia.");
}


/*Fun��o que Cria a Lista */
covid19* CriarLista(char p[20],int x,int y,int i,int j) {
    covid19 *novo = (covid19*)malloc(sizeof(covid19)); /*Permite alocar o conjunto de Bytes para a Lista*/
    if(novo==NULL)
        return NULL;
    strcpy(novo->pais,p); /*Copia o nome do pais para a Lista*/
    novo->casos=x;/*Coloca o numeros de casos*/
    novo->recuperados=y;/*Coloca o numeros de recuperados*/
    novo->obitos=i;/*Coloca o numeros de obitos*/
    novo->casos_ativos=j;/*Coloca o numeros de casos ativos*/
    novo->prox=NULL;/*Coloca o ponteiro apontando para NULL*/
    return novo;
}


/*Fun��o que insere um n� no inicio da Lista*/
covid19* Inserir_no_Inicio(covid19 *Lista,char p[20],int x,int y,int i,int j) {
    covid19 *novo_no= CriarLista(p,x,y,i,j);/*ponteiro que est� apontado para criar uma Lista*/
    if(novo_no==NULL)
        return Lista;
    if(Lista==NULL)
        return novo_no;
    else {
        novo_no->prox = Lista;
        Lista=novo_no;
    }
    return Lista;
}


/*Fun�ao que insere um n� no meio da Lista*/
covid19* Inserir_no_Meio(covid19 *Lista,char p[20],int x,int y,int i,int j) {
    covid19 *novo_no, *aux;/*Cria dois ponteiros do tipo No*/
    covid19 *anterior=NULL;
    novo_no = CriarLista(p,x,y,i,j);
    if(novo_no==NULL)
        return Lista;
    if(Lista==NULL)
        return novo_no;
    aux = Lista;
    while ( aux->prox!=NULL && (strcmp(aux->pais,p))) {
        anterior=aux;
        aux=aux->prox;
    }
    novo_no->prox=aux;
    if(anterior==NULL)
        Lista=novo_no;
    else
        anterior->prox=novo_no;
    return Lista;
}


/*Fun�ao que insere um n� no final da Lista*/
covid19* Inserir_no_Fim(covid19 *Lista,char p[20],int x,int y,int i,int j) {
    covid19* novo_no= CriarLista(p,x,y,i,j);
    if(novo_no==NULL)
        return Lista;
    if(Lista==NULL)
        return novo_no;
    covid19 *aux=Lista;
    while(aux->prox!=NULL) {
        aux=aux->prox;
        aux->prox=novo_no;
    }
    return Lista;
}

/*Fun�ao que impime a Lista*/
void imprimirLista(covid19 *Lista) {
    if(Lista==NULL)
        printf("A Lista se encontra Vazia\n");
    else {
        covid19 *aux=Lista;
        printf("INICIO!-> ");
        while(aux!=NULL) {
            printf("%s->",aux->pais);
            printf("|%d->",aux->casos);
            printf("%d->",aux->recuperados);
            printf("%d->",aux->obitos);
            printf("%d->",aux->casos_ativos);
            aux=aux->prox;
        }
    }
    printf("!NULL");
}


covid19 *removerInicio(covid19 *Lista, char nome[20]) {
    covid19 *aux;
    if(Lista==NULL)
        printf("N�o ha elemento na Lista");
    else {
        aux=Lista;
        nome=aux->pais;
        Lista=aux->prox;
        printf("Foi removido o pa�s %s\n",nome);
        free(aux);
    }
    return Lista;
}


covid19 *remover_Fim(covid19 *Lista, char nome[20]) {
    covid19 *anterior, *aux;
    if(Lista==NULL)
        printf("N�o ha elementos na Lista");
    else {
        aux=Lista;
        while(aux->prox!=NULL) {
            anterior=aux;
            aux=aux->prox;
        }
        nome=aux->pais;
        anterior->prox=NULL;
        printf("Foi removido o Pa�s %s\n",nome);
    }
    return Lista;
}

covid19 *Inserir_no_Fim(Lista *lista, char *p, int x, int y, int i, int j) {
  // covid19* novo_no= CriarLista(p,x,y,i,j);
  // if(novo_no==NULL)
  //     return Lista;
  // if(Lista==NULL)
  //     return novo_no;
  // covid19 *aux=Lista;
  // while(aux->prox!=NULL) {
  //     aux=aux->prox;
  //     aux->prox=novo_no;
  // }
  // return Lista;
}//
// Created by user on 12/06/2020.
//

