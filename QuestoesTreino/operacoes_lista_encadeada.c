#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um nó da lista
struct Node {
    int data;
    struct Node* next;
};

// Função para criar um novo nó com o dado fornecido
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erro ao alocar memória para o novo nó.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir um elemento no final da lista
void insertAtEnding(struct Node** head, int data){
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Função para inserir um elemento no início da lista
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Função para deletar um elemento da lista
void deleteElement(struct Node** head, int data) {
    struct Node* current = *head;
    struct Node* prev = NULL;

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Elemento não encontrado na lista.\n");
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

// Função para pesquisar um elemento na lista
void searchElement(struct Node* head, int data) {
    struct Node* current = head;

    while (current != NULL) {
        if (current->data == data) {
            printf("Elemento encontrado na lista.\n");
            return;
        }
        current = current->next;
    }

    printf("Elemento não encontrado na lista.\n");
}

// Função para inverter a lista
void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Função para imprimir a lista
void printList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

void insertInOrder(struct Node** head, int data){
    struct Node* temp = *head;
    struct Node* newNode = createNode(data);

    //pra caso a lista seja vazia
  if (*head == NULL || data < (*head)->data) {
    newNode->next = *head;
    *head = newNode;
    return;
  }

  // Encontrar o ponto de inserção na lista
  struct Node* current = *head;
  while (current->next != NULL && current->next->data < data) {
    current = current->next;
  }

  // Inserir o novo nó na posição correta
  newNode->next = current->next;
  current->next = newNode;
}

// Função principal
int main() {
    struct Node* head = NULL;

    insertAtEnding(&head, 3);
    insertAtEnding(&head, 7);
    insertAtEnding(&head, 11);
    //insertInOrder(&head, 10);

    printf("Lista original: ");
    printList(head);

    searchElement(head, 7);
    searchElement(head, 5);

    deleteElement(&head, 7);
    printf("Lista após deletar 7: ");
    printList(head);

    reverseList(&head);
    printf("Lista invertida: ");
    printList(head);

    // Libera a memória alocada para a lista
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
