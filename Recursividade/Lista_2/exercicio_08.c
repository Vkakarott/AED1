#include <stdio.h>

int parent[50001];
int size[50001];

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void union_sets(int a, int b) {
    int rootA = find(a);
    int rootB = find(b);
    
    if (rootA != rootB) {
        if (size[rootA] < size[rootB]) {
            parent[rootA] = rootB;
            size[rootB] += size[rootA];
        } else {
            parent[rootB] = rootA;
            size[rootA] += size[rootB];
        }
    }
}

int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        size[i] = 1;
    }
    
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        union_sets(a, b);
    }
    
    int families = 0;
    for (int i = 1; i <= n; i++) {
        if (find(i) == i) {
            families++;
        }
    }
    
    printf("%d\n", families);
    
    return 0;
}
