#include <stdio.h>

int main()

{
    /****************************************************
* Trab 2 : Numeros Primos
* Nome e Matricula: Matheus Giron de Castro 0050015251
* Professor: Alex Salgado
*****************************************************/

    printf("Ola, meu nome eh Matheus Giron e eu vou calcular numeros primos!\n\n");



    int positivo;
    int num;
    int repeticao = 0;
    int again;

    do{

    do{ printf("\nDigite um numero positivo:");
        scanf("%d", &positivo);
    }
    while(positivo<=0);

    for (num = 1; num <= positivo; num++) {

        if (positivo % num == 0)
        repeticao ++;
    }

    if (repeticao == 2)
        printf("O numero eh primo!");


    else  printf("O numero nao eh primo!");



    printf("\n\nDeseja continuar (1-Sim/2-Nao):  ");
    scanf("%d", &again);
    repeticao=0;
    }
    while(again==1);

    if (again==2)
        printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link\n\n");

    system("pause");
    return 0;
}
