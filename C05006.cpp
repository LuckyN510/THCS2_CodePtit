#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int u, v;
    scanf("%d%d", &u, &v);
    --u;
    --v;

    for (int i = 0; i < m; i++) { 
        int tmp = a[u][i];
        a[u][i] = a[v][i];
        a[v][i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}