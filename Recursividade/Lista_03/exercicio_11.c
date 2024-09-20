#include <stdio.h>

#define MAX 100

char board[MAX][MAX];
int visited[MAX][MAX];
int n, m;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};

int inside(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y, int mark) {
    visited[x][y] = mark; 
    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (inside(newX, newY) && !visited[newX][newY] && board[newX][newY] == '#') {
            dfs(newX, newY, mark);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", board[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = 0;
        }
    }

    int shipCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == '#' && !visited[i][j]) {
                shipCount++;
                dfs(i, j, shipCount);
            }
        }
    }

    int k;
    scanf("%d", &k);

    int hit[MAX * MAX] = {0};
    int destroyed[MAX * MAX] = {0};

    for (int i = 0; i < k; i++) {
        int L, C;
        scanf("%d %d", &L, &C);
        L--;
        C--;
        if (board[L][C] == '#') {
            int shipId = visited[L][C];
            hit[shipId] = 1;
        }
    }

    int destroyedCount = 0;
    for (int i = 1; i <= shipCount; i++) {
        int fullyDestroyed = 1;
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < m; y++) {
                if (visited[x][y] == i && board[x][y] == '#') {
                    if (!hit[i]) {
                        fullyDestroyed = 0;
                        break;
                    }
                }
            }
            if (!fullyDestroyed) break;
        }
        if (fullyDestroyed) {
            destroyedCount++;
        }
    }

    printf("%d\n", destroyedCount);

    return 0;
}
