#include <stdlib.h>
#include <stdio.h>



typedef struct agenda{ //Typedef serve para definir um nome para simplificar, e o nome é definido no final, nesse está contato
    char Nome[30]; 
    int Numero[11]; //11 = 47 99999 9999 sem os espaços
}contato;



//Prototipos das funções
void addContato(void);



int main(void){
    //variaveis
    char opcao;

    do {
        printf("---------------------------------------\n");
		printf("       AGENDA DE CONTATOS - MENU   \n\n");
		printf("[a] Criar Contato \n");
		printf("[b] Pesquisar Contato \n");
		printf("[c] Excluir Contato \n");
		printf("[d] Fechar Agenda\n\n");
		printf("Digite a sua opcao: ");
		scanf("%c",&opcao);
		fflush(stdin);

		switch(opcao) {
			case 'a':
                addContato();
				break;
			case 'b':
				break;
			case 'c':
				break;
			case 'd':
				break;
            default:
                printf("Opcao invalida! Tente novamente. \n");
                break;
		}
    } while (opcao != 'd');

    printf("\nSaindo...\n");

    return 0;
}