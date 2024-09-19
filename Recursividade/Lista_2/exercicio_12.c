#include <stdio.h>

#define MAX 100

int next_x[MAX][MAX];
int next_y[MAX][MAX];
int visited[MAX][MAX];

int m, n;

int simulate(int start_x, int start_y) {
    int x = start_x, y = start_y;

    while (x != 0 || y != 0) {
        if (visited[x][y]) {
            return 0;
        }

        visited[x][y] = 1;

        int new_x = next_x[x][y];
        int new_y = next_y[x][y];

        x = new_x;
        y = new_y;
    }

    return 1;
}

int main() {
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d %d", &next_x[i][j], &next_y[i][j]);
        }
    }

    int start_x, start_y;
    scanf("%d %d", &start_x, &start_y);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = 0;
        }
    }

    if (simulate(start_x, start_y)) {
        printf("VENCE\n");
    } else {
        printf("PRESO\n");
    }

    return 0;
}
