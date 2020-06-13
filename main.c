//
// Created by user on 10/06/2020.
//

#include <locale.h>
#include <stdbool.h>
#include "main.h"


int main() {
    setlocale(LC_ALL, "Portuguese");
    Lista lista = NULL;



    bool sair = false;
    while (!sair){
        switch (menu()) {
            case 1: InformacaoCovid(); break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 0: sair = true; break;

            default:
                break;
        }
    }





    return 0;
}

void limparTela(){
    system("cls");
}

int menu() {
    int op=0;
    limparTela();
    system("COLOR F0");
    printf ("\n\n\tUNICV\n");
    printf("\t\t\t\t\tCORONAV�RUS(COVID-19) NO MUNDO \n\n");
    printf("\t\t-------------------------------------------------------------------------------------\n\n");
    printf("\t\t  1 - IMFORM��O SOBRE CORONAV�RUS(COVID-19)                                            \n");
    printf("\t\t  2 - INSERIR N� NO INICIO DA LISTA                                                    \n");
    printf("\t\t  3 - INSERIR N� NO MEIO DA LISTA                                                      \n");
    printf("\t\t  4 - INSERIR N� NO FINAL DA LISTA                                                     \n");
    printf("\t\t  5 - IMPRIMIR A LISTA                                                                 \n");
    printf("\t\t  6 - PESQUISAR ELEMENTO ATRAV�Z DO NOME DO PA�S                                       \n");
    printf("\t\t  7 - CALCULAR TOTAL DE CASOS                                                          \n");
    printf("\t\t  8 - CALCULAR TOTAL DE MORTOS                                                         \n");
    printf("\t\t  9 - CALCULAR TOTAL DE RECUPERADOS                                                    \n");
    printf("\t\t 10 - IMPRIMIR POR ORDEM ASCENDENTE(COM MAIS CAOS DE COVID-19)                         \n");
    printf("\t\t 11 - CALCULAR CASOS ATIVOS DE CADA PA�S E ENVIA-LOS PARA O FECHEIRO (CasosAtivos.txt) \n");
    printf("\t\t 12 - ENVIAR TODOS OS N�S PARA O FECHEIRO(elementos.txt)                               \n");
    printf("\t\t 13 - REMOVER N� NO INICIO  DA LISTA                                                   \n");
    printf("\t\t 14 - REMOVER N� NO MEIO DA LISTA                                                      \n");
    printf("\t\t 15 - REMOVER UM N� NO FINAL DA LISTA                                                  \n");
    printf("\t\t 16 - REMOVER ELEMENTO DA LISTA                                                        \n");
    printf("\t\t  0 - SAIR                                                                             \n");
    printf ( "\n\tEscolha uma op��o: " );
    scanf ( "%d%*c", &op );
    return op;
}
