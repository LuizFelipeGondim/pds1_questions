#include <stdio.h>
#include <string.h>

#define TAM_AGENDA 100
#define TAM_NOME 50
#define TAM_TELEFONE 20

// Estrutura para representar um contato
struct Contato {
    char nome[TAM_NOME];
    int idade;
    char telefone[TAM_TELEFONE];
};

// Função para inserir um novo contato na agenda
void inserirContato(struct Contato agenda[], int *numContatos) {
    if (*numContatos < TAM_AGENDA) {
        printf("Informe o nome: ");
        scanf("%s", agenda[*numContatos].nome);
        printf("Informe a idade: ");
        scanf("%d", &agenda[*numContatos].idade);
        printf("Informe o telefone: ");
        scanf("%s", agenda[*numContatos].telefone);

        (*numContatos)++;
        printf("Contato inserido com sucesso.\n");
    } else {
        printf("Espaco insuficiente na agenda.\n");
    }
}

// Função para encontrar o índice de um contato pelo nome
int encontrarContato(struct Contato agenda[], int numContatos, const char *nome) {
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            return i; // Retorna o índice se encontrado
        }
    }
    return -1; // Retorna -1 se não encontrado
}

// Função para alterar um contato na agenda
void alterarContato(struct Contato agenda[], int numContatos) {
    char nome[TAM_NOME];
    printf("Informe o nome do contato a ser alterado: ");
    scanf("%s", nome);

    int indice = encontrarContato(agenda, numContatos, nome);
    if (indice != -1) {
        printf("Informe o novo nome: ");
        scanf("%s", agenda[indice].nome);
        printf("Informe a nova idade: ");
        scanf("%d", &agenda[indice].idade);
        printf("Informe o novo telefone: ");
        scanf("%s", agenda[indice].telefone);

        printf("Contato alterado com sucesso.\n");
    } else {
        printf("Contato nao encontrado.\n");
    }
}

// Função para excluir um contato da agenda
void excluirContato(struct Contato agenda[], int *numContatos) {
    char nome[TAM_NOME];
    printf("Informe o nome do contato a ser excluido: ");
    scanf("%s", nome);

    int indice = encontrarContato(agenda, *numContatos, nome);
    if (indice != -1) {
        // Move os contatos seguintes para preencher o espaço do contato excluído
        for (int i = indice; i < *numContatos - 1; i++) {
            strcpy(agenda[i].nome, agenda[i + 1].nome);
            agenda[i].idade = agenda[i + 1].idade;
            strcpy(agenda[i].telefone, agenda[i + 1].telefone);
        }

        (*numContatos)--;
        printf("Contato excluido com sucesso.\n");
    } else {
        printf("Contato nao encontrado.\n");
    }
}

// Função para exibir todos os contatos da agenda
void exibirContatos(struct Contato agenda[], int numContatos) {
    for (int i = 0; i < numContatos; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Idade: %d\n", agenda[i].idade);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("---------------\n");
    }
}

// Função para salvar a agenda em um arquivo binário
void salvarAgenda(struct Contato agenda[], int numContatos, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "wb");

    if (arquivo != NULL) {
        fwrite(&numContatos, sizeof(int), 1, arquivo); // Salva o número real de contatos
        fwrite(agenda, sizeof(struct Contato), numContatos, arquivo);
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
}

// Função para carregar a agenda de um arquivo binário
void carregarAgenda(struct Contato agenda[], int *numContatos, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "rb");

    if (arquivo != NULL) {
        fread(numContatos, sizeof(int), 1, arquivo); // Lê o número real de contatos
        fread(agenda, sizeof(struct Contato), *numContatos, arquivo);
        fclose(arquivo);
    } else {
        printf("Arquivo nao encontrado. Inicializando agenda vazia.\n");
        *numContatos = 0;
    }
}

int main() {
    struct Contato agenda[TAM_AGENDA];
    int numContatos = 0;
    char nomeArquivo[100];

    printf("Informe o nome do arquivo da agenda: ");
    scanf("%s", nomeArquivo);

    // Carregar a agenda do arquivo
    carregarAgenda(agenda, &numContatos, nomeArquivo);
    printf("%d", numContatos);
    int opcao;
    do {
        // Exibir menu
        printf("\n--- Menu ---\n");
        printf("1. Inserir Contato\n");
        printf("2. Alterar Contato\n");
        printf("3. Excluir Contato\n");
        printf("4. Exibir Contatos\n");
        printf("0. Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirContato(agenda, &numContatos);
                break;
            case 2:
                alterarContato(agenda, numContatos);
                break;
            case 3:
                excluirContato(agenda, &numContatos);
                break;
            case 4:
                exibirContatos(agenda, numContatos);
                break;
            case 0:
                // Salvar a agenda no arquivo antes de sair
                salvarAgenda(agenda, numContatos, nomeArquivo);
                printf("Agenda salva. Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
  return 0;
}