#include <stdio.h>
#include <string.h>

//declaracao do registro
typedef struct{

    //campos
    char nome[20]; 
    int idade;
    int matricula;

}Aluno;

main(){
    Aluno a[3];

    for(int i = 0; i <3; i++){
        printf("Digite o nome: ");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        fflush(stdin);
        printf("Digite a idade: ");
        scanf("%d", &a[i].idade);
        printf("Digite a matricula: ");
        scanf("%d", &a[i].matricula);
        fflush(stdin);
        printf("\n\n");
    }

    for(int i = 0; i < 3; i++){
        printf("Nome: %s", a[i].nome);
        printf("Idade: %d", a[i].idade);
        printf("Matricula: %d", a[i].matricula);
    }
}