#include <stdio.h>

#define MAX 500

char board[MAX][MAX];
int insurance[MAX][MAX];
int n;

int dx[] = {1, 0, 0, -1}; // Movimentos: baixo, esquerda, direita, cima
int dy[] = {0, -1, 1, 0};

// Função para determinar a direção da seta
int direction(char arrow) {
    if (arrow == 'V') return 0;  // Baixo
    if (arrow == '<') return 1;  // Esquerda
    if (arrow == '>') return 2;  // Direita
    return 3;                    // Cima
}

// Verifica se a célula está dentro do tabuleiro
int inside(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

// Função recursiva para checar se uma célula é segura
int checkSecurity(int x, int y) {
    if (!inside(x, y)) return 0; // Se está fora do tabuleiro, não é seguro
    if (insurance[x][y] != -1) return insurance[x][y]; // Já foi visitada

    insurance[x][y] = 0; // Marca temporariamente como insegura

    int d = direction(board[x][y]);
    int newX = x + dx[d];
    int newY = y + dy[d];

    // Faz a verificação recursiva
    insurance[x][y] = checkSecurity(newX, newY);

    return insurance[x][y];
}

int main() {
    // Leitura do tamanho do tabuleiro
    scanf("%d", &n);

    // Leitura das direções das setas no tabuleiro
    for (int i = 0; i < n; i++) {
        scanf("%s", board[i]);
    }

    // Inicializa a matriz de células como não visitadas (-1)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            insurance[i][j] = -1;
        }
    }

    int safeBallots = 0;

    // Verifica todas as células do tabuleiro
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (checkSecurity(i, j)) {
                safeBallots++;
            }
        }
    }

    // Imprime o número de células seguras
    printf("%d\n", safeBallots);

    return 0;
}
