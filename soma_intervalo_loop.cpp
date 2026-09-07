#include<stdio.h>
#include<stdlib.h>

int pedirInteiro()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    return numero;
}

int somaIntervalo(int inicio, int fim)
{
    int soma = 0;
    for (int i = inicio; i <= fim; i++)
    {
        soma += i;
    }
    return soma;
}

int main(){
    
    int inicio;
    int fim;

    inicio = pedirInteiro();
    fim = pedirInteiro();

    printf("Soma %d", somaIntervalo(inicio, fim));

    return 0;
}