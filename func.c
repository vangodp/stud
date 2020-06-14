//{//<editor-fold desc="amonto">

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include "main.h"

void copia (covid19 fonte, covid19* destino) {
    strcpy (
        destino->pais, fonte.pais);
    destino->casos        = fonte.casos;
    destino->recuperados  = fonte.recuperados;
    destino->obitos       = fonte.obitos;
    destino->casos_ativos = fonte.casos_ativos;
    destino->prox         = fonte.prox;
}
void imprime (covid19 c) {
    printf ("Pais: %s\nNumero Total de casos: %d\nRecuperados: %d\nObitos: %d\nAtivos: %d\nProx: %d",
            c.pais,
            c.casos,
            c.recuperados,
            c.obitos,
            c.casos_ativos,
            (int) c.prox
           );
}

void lerDados (covid19* d) {
    system ("COLOR 0F");
    printf ("\nDigite o nome do Pais: ");           gets (d->pais);
    printf ("\nDigite o número de Casos: ");        scanf ("%d%*c", &d->casos);
    printf ("\nDigite o número de Recuperados: ");  scanf ("%d%*c", &d->recuperados);
    printf ("\nDigite o número de Obitos: ");       scanf ("%d%*c", &d->obitos);
    printf ("\nDigite o número de Casos Ativos: "); scanf ("%d%*c", &d->casos_ativos);
    printf ("\n");
}

bool criarLista (Lista* lista) {
    if (*lista == NULL) {
        *lista = (Lista) malloc (sizeof (Lista));
        (*lista)->prox = NULL;
        return true;
    }
    return false;
}
//}//</editor-fold>

int listaVazia (Lista lista) {
    return (lista == NULL);
}

void inserir_no_Fim (Lista* lista, covid19 dados) {
    covid19* anterior, *novo;
    
    /*criando novo nó*/
    novo = (covid19*) malloc (sizeof (covid19*));
    
    static int indice = 0;
    covid19 no[6] = {
        {   "Espanha", 20000,  8000, 100, 0, NULL },
        {    "Italia", 30000, 12000, 500, 0, NULL },
        {    "França", 25000,  9000, 400, 0, NULL },
        {    "Angola",  2000,   900,  40, 0, NULL },
        {  "Portugal",  5000,  3000, 150, 0, NULL },
        {"Cabo Verde",   466,   237,   5, 0, NULL }
        
    };
    
#if (AUTOFILL == 1)
    puts ("AUTOFILL.\n");
    copia (no[indice], novo);
    indice++;
    if (indice == 6) {
        limparTela();
        puts ("AUTOFILL!: Limite de casos de testes programados 6.");
        getchar();
        limparTela();
        return;
    }
#endif
    //lerDados(&*novo);// imprime(*novo), getchar();
    
    
    /*Se a lista esta vazia inserimos o primeiro nó. Caso contrario inserimos o nó sempre depois do ultimo nó*/
    if (listaVazia (*lista)) {
        novo->prox = *lista;
        *lista = novo;
        limparTela();        
        puts ("Primeiro nó inserido.\n");
        getchar();
        limparTela();        
        return;
    } else {
        limparTela();
        puts ("Inserindo ao final.\n");
        anterior = *lista;
        
        int i = 0;
        /* Avanzamos hasta el último elemento */
        while (anterior->prox) {
            anterior = anterior->prox;
            i++;
            printf ("Encontrados %d nós", i);
            Sleep (1000);
        }
        
        /* Insertamos el nuevo nodo después del nodo anterior */
        novo->prox = anterior->prox;
        anterior->prox = novo;
        
        getchar();
        limparTela();        
    }
    
    
    
}

void mostrarLista (Lista lista) {
    covid19* no = lista;
    
    if (listaVazia (lista)) {
        limparTela();
        printf ("Lista vazia\n");
        getchar();
        limparTela();
    } else {
        limparTela();
        while (no) {
            imprime (*no);
            puts ("\n\n");
            no = no->prox;
        }
        putchar (10); //\n
        getchar();
        limparTela();        
    }
}
