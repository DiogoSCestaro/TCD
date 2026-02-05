#include <stdio.h>
#include "functions/mainf.h"
#include <stdlib.h>

int main(){

    system("chcp 1252 > nul"); //altera o terminal para portugues

    int opcao = 0;
    FILE *fp; //arquivo a ser carregado

    while (opcao!=5){
  
        menu();
        scanf("%d",&opcao);
        
        switch (opcao){ //switch tem um menor tempo de execução do que varios if's
        
        case 1:
            system("cls");
            //pedir um nome de um arquivo que está na pasta /TCD/
            break;

        case 2:
            
            system("cls");
            
            if(fp == NULL){
                printf("Arquivo não encontrado ou nenhum arquivo carregado!\n");
            }else{
                submenu2();
            }
            break;
        
        case 3:

            system("cls");
            
            if(fp == NULL){
                printf("Arquivo não encontrado ou nenhum arquivo carregado!\n");
            }else{
                submenu3();
            }
            break;
        
        case 4:

            system("cls");
            //esta opcao so pode ser executada se algum algoritmo for executado anteriormente.

            break;
        
        case 5:
            printf("Saindo\n");
            break;


        default:
            system("cls");
            printf("Opção inválida!\n");
            break;
        }
    }
    
    //A opção 5, antes de ser executada, deverá liberar toda a memora alocada
    

    return 0;
}