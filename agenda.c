#include <stdlib.h>
#include <stdio.h>



typedef struct agenda{ //Typedef serve para definir um nome para simplificar, e o nome é definido no final, nesse está contato
    char nome[30]; 
    int numero[11]; //11 = 47 99999 9999 sem os espaços
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
                pesquisarContato();
                break;
            case 'c':
                excluirContato();
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


//Funções
void addContato(void){
    
    Contato AddContato; //Define estrutura "Nome" e "Numero"
    File *contatos; //Declarar variavel "contatos"

        contatos = fopen("contatos.txt","????")
        if (contatos == NULL) {
    
        printf("Erro ao abrir arquivo.\n");
        exit(1)

}

    printf("\nDigite o nome do contato: ");
    scanf(" %c[^\n]", AddContato.nome);
    fprintf(contatos, "", AddContato.nome);
    printf("\nDigite o numero do telefone: ");
    scanf(" %i[^\n]", AddContato.numero);
     fprintf(contatos, "", AddContato.numero);
    fclose(contatos);
    printf("Contato adicionado\n");
}
