#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 1000001

int minTests(int n, int k) {
    int **dp = (int **)malloc((k + 1) * sizeof(int *));
    for (int i = 0; i <= k; i++) {
        dp[i] = (int *)malloc((n + 1) * sizeof(int));
    }
    
    for (int j = 1; j <= n; j++) {
        dp[1][j] = j;
    }

    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            int low = 1, high = j;
            while (low + 1 < high) {
                int mid = (low + high) / 2;
                if (dp[i - 1][mid - 1] < dp[i][j - mid]) {
                    low = mid;
                } else {
                    high = mid;
                }
            }
            dp[i][j] = 1 + dp[i - 1][low - 1] < dp[i][j - low] ? 1 + dp[i - 1][low - 1] : 1 + dp[i][j - low];
        }
    }

    int result = dp[k][n];
    
    for (int i = 0; i <= k; i++) {
        free(dp[i]);
    }
    free(dp);

    return result;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", minTests(n, k));
    return 0;
}
