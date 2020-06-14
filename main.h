//
// Created by user on 12/06/2020.
//

#ifndef ANDRAH_PROJETO2_MAIN_H
#define ANDRAH_PROJETO2_MAIN_H

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
void     imprime            (covid19 c);
void     copia              (covid19  fonte, covid19* destino);
void     imprimirLista      (covid19 *Lista);
covid19* CriarLista         (covid19);
covid19* inserir_no_Inicio  (Lista*, covid19);
covid19* inserir_no_Meio    (Lista*, covid19);
covid19* inserir_no_Fim     (Lista*, covid19);
covid19 *removerInicio      (Lista*, covid19);
covid19 *remover_Fim        (Lista*, covid19);



#endif //ANDRAH_PROJETO2_MAIN_H
