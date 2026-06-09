#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	float valor;
	setlocale(LC_ALL, "Portuguese");
	
	
printf("\n****************************************\n");
printf("*Aluna: IORRANA DE SOUZA HIPOLITO - RA: 0025980 *");
printf("\n*Programa PJA-39 - Pedir senha até acertar *");
printf("\n****************************\n");


    do {
        printf("Digite um valor positivo para o cadastro: ");
        scanf("%f", &valor);

        // Opcional: Avisar o usuário caso ele digite um valor inválido
        if (valor <= 0) {
            printf("Erro: O valor deve ser estritamente maior que zero.\n\n");
        }

    } while (valor <= 0); // Repete se o valor for negativo ou zero

    printf("\nSucesso! Valor %.2f cadastrado com êxito.\n", valor);

    return 0;
}
