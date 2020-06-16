#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"


int main() {
    setlocale(LC_ALL, "Portuguese");
    Lista lista = NULL;
    covid19 dados;
    
    bool sair = false;
    while (!sair){
        switch (menu()) {
            case 1: informacaoCovid();             break;
            case 2: inserir_no_Inicio(&lista);     break;
            case 3:                                break;
            case 4: inserir_no_Fim(&lista, dados); break;
            case 5: mostrarLista(lista);           break;
            case 0: sair = true;                   break;
            default:                               break;
        }
    }




    free(lista);
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
    printf("\t\t\t\t\tCORONAVÍRUS(COVID-19) NO MUNDO \n\n");
    printf("\t\t-------------------------------------------------------------------------------------\n\n");
    printf("\t\t  1 - IMFORMÇÃO SOBRE CORONAVÍRUS(COVID-19)                                            \n");
    printf("\t\t  2 - INSERIR NÓ NO INICIO DA LISTA                                                    \n");
    printf("\t\t  3 - INSERIR NÓ NO MEIO DA LISTA                                                      \n");
    printf("\t\t  4 - INSERIR NÓ NO FINAL DA LISTA                                                     \n");
    printf("\t\t  5 - IMPRIMIR A LISTA                                                                 \n");
    printf("\t\t  6 - PESQUISAR ELEMENTO ATRAVÉZ DO NOME DO PAÍS                                       \n");
    printf("\t\t  7 - CALCULAR TOTAL DE CASOS                                                          \n");
    printf("\t\t  8 - CALCULAR TOTAL DE MORTOS                                                         \n");
    printf("\t\t  9 - CALCULAR TOTAL DE RECUPERADOS                                                    \n");
    printf("\t\t 10 - IMPRIMIR POR ORDEM ASCENDENTE(COM MAIS CAOS DE COVID-19)                         \n");
    printf("\t\t 11 - CALCULAR CASOS ATIVOS DE CADA PAÍS E ENVIA-LOS PARA O FECHEIRO (CasosAtivos.txt) \n");
    printf("\t\t 12 - ENVIAR TODOS OS NÓS PARA O FECHEIRO(elementos.txt)                               \n");
    printf("\t\t 13 - REMOVER NÓ NO INICIO  DA LISTA                                                   \n");
    printf("\t\t 14 - REMOVER NÓ NO MEIO DA LISTA                                                      \n");
    printf("\t\t 15 - REMOVER UM NÓ NO FINAL DA LISTA                                                  \n");
    printf("\t\t 16 - REMOVER ELEMENTO DA LISTA                                                        \n");
    printf("\t\t  0 - SAIR                                                                             \n");
    printf ( "\n\tEscolha uma opção: " );
    scanf ( "%d%*c", &op );
    return op;
}

/*Imformações sobre CORONAVÍRUNS(COVID-19)*/
void informacaoCovid() {
    system("COLOR 0F");
    printf("\nA Organização Mundial da Saúde (OMS) declarou,em 30 de janeiro de 2020,\nque o surto da doença causada pelo novo coronavírus (COVID-19)\n");
    printf("constitui uma Emergência de Saúde Pública de Importância Internacional – o mais alto nível de alerta da\n");
    printf("Organização, conforme previsto no Regulamento Sanitário Internacional.\n");
    printf("\tEm 11 de março de 2020, a COVID-19 foi caracterizada pela OMS como uma pandemia.");
    getchar();
}