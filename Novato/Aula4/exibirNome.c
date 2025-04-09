/*
 * Fazer um programa que leia nome e sobrenome
 * 
 */

#include <stdio.h>

int main(){
    char nome[30];
    char sobrenome[30];

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Seja bem vindo: %s %s \n", nome, sobrenome);

    return 0;
}
