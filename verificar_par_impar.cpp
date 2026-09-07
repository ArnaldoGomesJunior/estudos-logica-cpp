#include<stdio.h>
#include<stdlib.h>

/*int EhPar(int numero) FUNÇÃO CHATA PARA VERIFICAR SE O NÚMERO É PAR OU ÍMPAR
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

*/ 
void verificarParImpar(int numero)
{
    if (numero % 2 == 0)
    {
        printf("Par \n");
    }
    else
    {
        printf("Impar \n");
    }
}

int pedirInteiro()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    return numero;
}

/*int main()  FORMA PADRÃO DE FAZER 
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (EhPar(numero))
    {
        printf("O numero %d e par\n", numero);
    }
    else
    {
        printf("O numero %d e impar\n", numero);
    }

    return 0;
}    

FORMA DE FAZER USANDO FUNÇÃO PARA PEDIR O NÚMERO POREM AINDA INEFICIENTE POIS A FUNÇÃO EHPar É CHATA E REPETITIVA

int main()
{
    int numero = pedirInteiro();

    if (EhPar(numero))
    {
        printf("O numero %d e par\n", numero);
    }
    else
    {
        printf("O numero %d e impar\n", numero);
    }

    return 0;

    AGORA SIM A REAL OFICIAL 100% EFICIENTE E LEGAL */

    int main()
    {
        int numero;

        numero = pedirInteiro();

        verificarParImpar(numero);

        return 0;
    
}