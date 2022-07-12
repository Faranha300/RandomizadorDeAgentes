#include <stdio.h>
#include <stdbool.h>

int main() {
    srand(time(0));
    int quantidade, numero, numerosSorteados[19];
    int indexLista = 0;

    printf("Quantos agentes devem ser randomizados: ");
    scanf("%i", &quantidade);
    printf("\n");

    while (quantidade > 0){
        numero = (rand() % 19) + 1;
        char numeroNaLista = false;

        for (int i = 0; i <= indexLista; i++){ // Descobrindo se o número sorteado já está na lista
            if (numero == numerosSorteados[i]){
                numeroNaLista = true; // Se o número já está na lista, o programa irá sortear outro número, até chegar na quantidade desejada
            };
        };

        if (numeroNaLista == false){ // Se o número sorteado não está na lista:
            switch (numero) {
                case 1:
                    printf("Astra");
                    break;
                case 2:
                    printf("Breach");
                    break;
                case 3:
                    printf("Brimstone");
                    break;
                case 4:
                    printf("Chamber");
                    break;
                case 5:
                    printf("Cypher");
                    break;
                case 6:
                    printf("Fade");
                    break;
                case 7:
                    printf("Jett");
                    break;
                case 8:
                    printf("KAY/O");
                    break;
                case 9:
                    printf("Killjoy");
                    break;
                case 10:
                    printf("Neon");
                    break;
                case 11:
                    printf("Omen");
                    break;
                case 12:
                    printf("Phoenix");
                    break;
                case 13:
                    printf("Raze");
                    break;
                case 14:
                    printf("Reyna");
                    break;
                case 15:
                    printf("Sage");
                    break;
                case 16:
                    printf("Skye");
                    break;
                case 17:
                    printf("Sova");
                    break;
                case 18:
                    printf("Viper");
                    break;
                case 19:
                    printf("Yoru");
                    break;
            };
            quantidade -= 1;
            numerosSorteados[indexLista] = numero;
            indexLista += 1;
            printf("\n");
        };
    };
    system("pause");
    return 0;
}
