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

void     limparTela         ();
int      menu               ();
void     InformacaoCovid    ();
void     imprimirLista      (covid19 *Lista);
covid19* CriarLista         (char p[20],int x,int y,int i,int j);
covid19* Inserir_no_Inicio  (covid19 *Lista,char p[20],int x,int y,int i,int j);
covid19* Inserir_no_Meio    (covid19 *Lista,char p[20],int x,int y,int i,int j);
covid19* Inserir_no_Fim     (Lista* Lista,char p[20],int x,int y,int i,int j);
covid19 *removerInicio      (covid19 *Lista, char nome[20]);
covid19 *remover_Fim        (covid19 *Lista,char nome[20]);




#endif //ANDRAH_PROJETO2_MAIN_H
