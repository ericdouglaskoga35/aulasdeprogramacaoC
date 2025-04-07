/*
 * Esse programa realiza a media de duas notas
 * */
#include <stdio.h>//Biblioteca principal de input e output

//Função principal
int main(){
    //Declaração de variavel
    //NotaA, NotaB e Media sãa do tipo decimais float ponto flutuante
    float notaA, notaB, media;

    //Comando de saida mostrando uma mensagem
    printf("Digite a primeira nota: ");
    //Comando de entrada esperar o usuario digitar um valor
    scanf("%f", &notaA);

    //Comando de saida
    printf("Digite a segunda nota: ");
    //Comando de entrada
    scanf("%f", &notaB);

    //Operador aritmético para realizar o cálculo da média
    media = (notaA + notaB) / 2;

    //Mostra a mensagem final com o resultado da media para o usuaŕio
    printf("A media da sua nota foi: %.2F \n", media);

    //Retorna um valor para sair do programa
    return 0;
}
