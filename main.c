#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    system("color 09");
	srand(time(NULL));
	int sorteado, digitado, contador=0;
	int s=1;
	int n=0;
	sorteado = 1 + rand()%50;
	printf("      #        ######     ##   #         #   ##   ##     #   #    #   #####\n");
    printf("     # #       #     #          #       #         # #    #   #    #   #\n");
    printf("    #   #      #      #   ##     #     #     ##   #  #   #   #    #   #\n");
    printf("   #     #     #     #    ##      #   #      ##   #   #  #   ######   #####\n");
    printf("  #########    #    #     ##       # #       ##   #    # #   #    #   #\n");
    printf(" #         #   #####      ##        #        ##   #     ##   #    #   #####\n");
    printf("                                                                           \n");
    printf("                              # # # #\n");
    printf("                             #       #\n");
    printf("                             #       #\n");
    printf("                             #       #\n");
    printf("                             #       #\n");
    printf("                              # # # # \n");
    printf("                                                                           \n");
    printf("      ##     #     ##    ##   ##      ##   #####   #####      # # # #\n");
    printf("      # #    #     ##    ##   # #    # #   #       #    #    #       #\n");
    printf("      #  #   #     ##    ##   #  #  #  #   #       #   #     #       #\n");
    printf("      #   #  #     ##    ##   #   ##   #   #####   ####      #       #\n");
    printf("      #    # #     ##    ##   #        #   #       #   #     #       #\n");
    printf("      #     ##     ########   #        #   #####   #    #     # # # #\n");
	printf("O n�mero sorteado est� entre: 1 E 50\n");

	do{
		contador++;
		printf("Chute um n�mero: \n");
		scanf("%d",&digitado);

		if(digitado == sorteado){
			printf("Boaa, s� conquitar o mundo humano!!! \n");
			printf("Acertou em %d tentativas.\n", contador);
		}else if (sorteado < digitado){
			printf("Chute um n�mero menor: \n");
		}else{
			printf("Tente um n�mero maior: \n");
		}

	}
	while(sorteado != digitado);

	printf("\n                Cr�ditos: \n");
    printf("Gustavo De Campos Araujo Caramelo RA: 21308545 \n");
    printf("Higor Mantas De Oliveira Lins     RA: 21245760 \n");
    printf("Isabella Fagundes Barao           RA: 21268610");
	return 0;
}
