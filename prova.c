#include <stdio.h>

/* Le um numero inteiro do teclado.
   Retorna -1 se o usuario digitar algo que nao e numero
   e 0 se o teclado for fechado (fim da entrada). */
int ler_inteiro() {
    int valor;
    int c;

    if (scanf("%d", &valor) == 1) {
        return valor;
    }

    if (feof(stdin)) {
        return 0;
    }

    /* limpa o que foi digitado de errado */
    while ((c = getchar()) != '\n' && c != EOF) {
    }
    return -1;
}

/* Parte 1: mostra o estoque (Ok / Acabando) */
void mostrar_estoque() {
    const char *nomes[4] = {"Arroz", "Leite", "Banana", "Sabao em po"};
    int dias_restantes[4] = {20, 4, 3, 30};
    int i;

    printf("\n=== ESTOQUE ===\n");
    for (i = 0; i < 4; i++) {
        printf("%s - %d dias - ", nomes[i], dias_restantes[i]);
        if (dias_restantes[i] < 5) {
            printf("Acabando\n");
        } else {
            printf("Ok\n");
        }
    }
}

/* Parte 2: gera o cores.css com o tema escolhido */
void escolher_tema() {
    int opcao;
    const char *fundo, *texto, *cabecalho, *borda;
    FILE *arquivo;

    printf("\n1 - Claro\n2 - Escuro\n3 - Verde\nOpcao: ");
    opcao = ler_inteiro();

    if (opcao == 2) {
        fundo = "#1e1e1e"; texto = "#f0f0f0"; cabecalho = "#444444"; borda = "#888888";
    } else if (opcao == 3) {
        fundo = "#e8f5e9"; texto = "#1b5e20"; cabecalho = "#a5d6a7"; borda = "#2e7d32";
    } else {
        fundo = "#ffffff"; texto = "#000000"; cabecalho = "#e6e6e6"; borda = "#000000";
    }

    arquivo = fopen("cores.css", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }
    fprintf(arquivo, "body { background-color: %s; color: %s; }\n", fundo, texto);
    fprintf(arquivo, "a { color: %s; }\n", texto);
    fprintf(arquivo, "th { background-color: %s; }\n", cabecalho);
    fprintf(arquivo, "th, td { border: 1px solid %s; }\n", borda);
    fprintf(arquivo, "hr { border-top-color: %s; }\n", borda);
    fclose(arquivo);

    printf("cores.css criado! Atualize o navegador (F5).\n");
}

int main() {
    int opcao;

    do {
        printf("\n===== MEU SITE =====\n");
        printf("1 - Ver estoque\n");
        printf("2 - Escolher tema de cores\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        opcao = ler_inteiro();

        if (opcao == 1) {
            mostrar_estoque();
        } else if (opcao == 2) {
            escolher_tema();
        } else if (opcao != 0) {
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}