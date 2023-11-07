#include <stdio.h>
#define TAM  3 

typedef struct{
    char nome[20];
    int idade;
}Pessoa;

void cadastrar(Pessoa p[], int indice){
    printf("Digite o nome do aluno; ");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade: ");
    scanf("%d", &p[indice].idade);
    fflush(stdin);
}

void imprimirLista(Pessoa p[], int totalCadastrados){
    for(int i = 0; i < totalCadastrados; i++){
        printf("\nNome: %s", p[i].nome);
         printf("\nIdade: %d", p[i].idade);
    }
}

main(){

    Pessoa p[TAM];
    int opcao, totalCadastro = 0;

    do{
        printf("\nDigite 1 para cadastrar: ");
        printf("\nDigite 2 para mostrar os cadastros");
        printf("\nDigite 0 para sair: ");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
            if(totalCadastro < TAM){
                cadastrar(p, totalCadastro);
                totalCadastro++;
            }else{
                printf("Total de cadostros atingido");
            }
                break;
            case 2:
                if(totalCadastro == 0){
                    printf("\n\nNao existem pessoas na lista");
                }else{
                    imprimirLista(p, totalCadastro);
                }
                break;
            default:
            printf("Sistema encerrado");
        }

    } while(opcao != 0);
}