#include <stdio.h>
#include <string.h>

//declaracao do registro
struct pessoa{

    //campos
    char nome[20]; 
    int idade;
    float salario;
    int matricula;

};

typedef struct{
    char rua[20];
    int numero;
    
}Endereco;

main(){

    //criar uma variavel do tipo registro
    struct pessoa p1;
    struct pessoa p2;
    Endereco end;

    p1.idade = 20;
    strcpy(p1.nome, "Maria");
    p1.salario = 1000.0;
    p1.matricula = 2000;

    p2.idade = 25;
    strcpy(p2.nome, "Pedro");
    p2.salario = 1500.0;
    p2.matricula = 1000;

    printf("Digite o nome da rua: ");
    //scanf("%[^\n]", end.rua);
    fgets(end.rua, sizeof(end.rua), stdin);
    printf("Digite o numero: ");
    scanf("%d", &end.numero);

    //informacoes do registro p1

    printf("\nnome: %s", p1.nome);
    printf("\nidade %d", p1.idade);
    printf("\nSalario: %f", p1.salario);
    printf("\nMatricula: %d", p1.matricula);

     printf("\nnome: %s", p2.nome);
    printf("\nidade %d", p2.idade);
    printf("\nSalario: %f", p2.salario);
    printf("\nMatricula: %d", p2.matricula);

    printf("\n\nRua: %s", end.rua);
    printf("Numero: %d", end.numero);

}