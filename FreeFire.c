#include <stdio.h>
#include <string.h>

#define MAX_ITENS 10

// Estrutura do item
typedef struct {
    char nome[50];
    char tipo[30];
    int quantidade;
} Item;

int main() {
    Item mochila[MAX_ITENS];
    int total = 0;
    int opcao;

    do {
        printf("\n=== 🏝️ MOCHILA DE SOBREVIVÊNCIA – NÍVEL NOVATO ===\n");
        printf("1️⃣  Adicionar item\n");
        printf("2️⃣  Remover item\n");
        printf("3️⃣  Listar itens\n");
        printf("0️⃣  Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // limpa o buffer do Enter

        switch (opcao) {
            case 1: // Adicionar item
                if (total >= MAX_ITENS) {
                    printf("\n⚠️  A mochila está cheia!\n");
                } else {
                    printf("\nDigite o nome do item: ");
                    fgets(mochila[total].nome, 50, stdin);

#include <stdio.h>
#include <string.h>

#define MAX_ITENS 10

// Estrutura do item
typedef struct {
    char nome[50];
    char tipo[30];
    int quantidade;
} Item;

int main() {
    Item mochila[MAX_ITENS];
    int total = 0;
    int opcao;

    do {
        printf("\n=== 🏝️ MOCHILA DE SOBREVIVÊNCIA – NÍVEL AVENTUREIRO ===\n");
        printf("1️⃣  Adicionar item\n");
        printf("2️⃣  Remover item\n");
        printf("3️⃣  Listar itens\n");
        printf                    mochila[total].nome[strc


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ITENS 10

// Enum para critério de ordenação
typedef enum {
    NOME = 1,
    TIPO,
    PRIORIDADE
} Criterio;

// Estrutura do item
typedef struct {
    char nome[50];
    char tipo[30];
    int quantidade;
    int prioridade; // de
