#include <stdio.h>
#define TAM  3 

typedef struct{
    char nome[20];
    int idade;
    int id;
    int status;
}Pessoa;

void cadastrar(Pessoa p[], int indice){
    p[indice].status = 1;
    p[indice].id = rand() % 100;
    printf("Digite o nome do aluno; ");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &p[indice].idade);
    fflush(stdin);
}

void imprimirLista(Pessoa p[], int totalCadastrados){
    for(int i = 0; i < totalCadastrados; i++){
        printf("\nId: %d", p[i].id);
        printf("\nNome: %s", p[i].nome);
        printf("\nIdade: %d", p[i].idade);
        if(p[i].status == 1){
            printf("\nStatus: Ativo");
        }
        else{
            printf("\nStatus: Inativo");
        }
        printf("\n\n");
    }
}

void buscar(Pessoa p[], int totalCadastrados, int id){
    if(totalCadastrados == 0){
        printf("Lista vazia");
        return;
    }else{
        for(int i = 0; i < totalCadastrados; i++){
            if(p[i].id == id){
                printf("\nNome: %s", p[i].nome);
                printf("\nIdade: %d", p[i].idade);
                return;
            }
        }
    }
    printf("Não existe o registro na lista");
}

void alterar(Pessoa p[], int totalCadastrados, int id){
    int escolha;
    if(totalCadastrados == 0){
        printf("Lista vazia");
        return;
    }else{
        for(int i = 0; i < totalCadastrados; i++){
            if(p[i].id == id){
                printf("1- Alterar nome. 2- Alterar idade, 3- Alterar stetus, 4- Alterar tudo");
                scanf("%d", &escolha);
                switch(escolha){
                case 1:
                    printf("\n Alterar nome: ");
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    break;
                case 2:
                    printf("\nAlterar Idade: ");
                    scanf("%d", &p[i].idade);
                    break;
                case 3:
                    printf("\nAlterar  status 1 - Ativo / 0 - Inativo");
                    scanf("%d",&p[i].status);
                    break;
                case 4:
                    printf("\n Alterar nome: ");
                    fgets(p[i].nome,Alterar  status  sizeof(p[i].nome));
                    printf("\n1 - Ativo / 0 - Inativo");
                    scanf("%d",&p[i].nome);
                }               
                return;
            }
        }
    }
    printf("Não existe o registro na lista");
}

main(){

    Pessoa p[TAM];
    int opcao, totalCadastro = 0, idBusca;

    do{
        printf("\nDigite 1 para cadastrar: ");
        printf("\nDigite 2 para mostrar os cadastros");
         printf("\nDigite 3 para buscar o registro");
         printf("Digite 4 para alterar o registro");
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
            case 3:
                printf("Digite o id para buscar");
                scanf("%d", &idBusca);
                buscar(p,totalCadastro, idBusca);
                break;
            case 3:
                printf("Digite o 4 para buscar");
                scanf("%d", &idBusca);
                buscar(p,totalCadastro, idBusca);
            default:
            printf("Sistema encerrado");
        }

    } while(opcao != 0);
}
