//
// Created by user on 12/06/2020.
//

#ifndef ANDRAH_PROJETO2_MAIN_H
#define ANDRAH_PROJETO2_MAIN_H

#include <stdbool.h>

#define AUTOFILL 1

typedef struct No covid19;
typedef struct No* Lista;

struct No {
    char pais[20];
    int casos;
    int recuperados;
    int obitos;
    int casos_ativos;
    struct No *prox;
};

int      menu               ();
void     limparTela         ();
void     informacaoCovid    ();
void     imprime            (covid19);
void     copia              (covid19, covid19*);
void     imprimirLista      (covid19*);
void     mostrarLista       (Lista );
bool     criarLista         (Lista*);
covid19* inserir_no_Inicio  (Lista*, covid19);
covid19* inserir_no_Meio    (Lista*, covid19);
void     inserir_no_Fim     (Lista*, covid19);
covid19 *removerInicio      (Lista*, covid19);
covid19 *remover_Fim        (Lista*, covid19);
//imprime(*(*lista)->prox);



#endif //ANDRAH_PROJETO2_MAIN_H
