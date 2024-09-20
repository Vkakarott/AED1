#include <stdio.h>
#include <stdlib.h>

int xor_of_combination(int *arr, int *indices, int k) {
    int result = 0;
    for (int i = 0; i < k; i++) {
        result ^= arr[indices[i]];
    }
    return result;
}

void generate_combinations(int *arr, int *indices, int start, int depth, int end, int k, int *max_xor) {
    if (depth == k) {
        int current_xor = xor_of_combination(arr, indices, k);
        if (current_xor > *max_xor) {
            *max_xor = current_xor;
        }
        return;
    }
    for (int i = start; i <= end - (k - depth); i++) {
        indices[depth] = i;
        generate_combinations(arr, indices, i + 1, depth + 1, end, k, max_xor);
    }
}

void find_max_xor(int *arr, int n, int k) {
    int max_xor = 0;
    int *indices = (int *)malloc(k * sizeof(int));

    generate_combinations(arr, indices, 0, 0, n - 1, k, &max_xor);

    printf("%d\n", max_xor);
    free(indices);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int *arr = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        find_max_xor(arr, n, k);

        free(arr);
    }

    return 0;
}
