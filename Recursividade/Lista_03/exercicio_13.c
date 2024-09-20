#include <stdio.h>

#define MAX 100

int next_x[MAX][MAX];
int next_y[MAX][MAX];
int visited[MAX][MAX];
int can_reach_exit[MAX][MAX];
int m, n;

int dfs(int x, int y) {
    if (x < 0 || x >= m || y < 0 || y >= n) {
        return 0;
    }
    if (visited[x][y]) {
        return can_reach_exit[x][y];
    }
    visited[x][y] = 1;
    
    if (x == 0 && y == 0) {
        can_reach_exit[x][y] = 1;
        return 1;
    }

    int nx = next_x[x][y];
    int ny = next_y[x][y];

    can_reach_exit[x][y] = dfs(nx, ny);

    return can_reach_exit[x][y];
}

int main() {
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d %d", &next_x[i][j], &next_y[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = 0;
            can_reach_exit[i][j] = 0;
        }
    }

    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                if (dfs(i, j)) {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
