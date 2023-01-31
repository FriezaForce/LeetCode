#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    int *p = (int *) a, *q = (int *) b;
    return p[0] - q[0];
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize){
    int **result = (int **) malloc(matSize * sizeof(int *));
    for (int i = 0; i < matSize; i++) {
        result[i] = (int *) malloc(2 * sizeof(int));
        result[i][0] = 0;
        for (int j = 0; j < *matColSize; j++) {
            result[i][0] += mat[i][j];
        }
        result[i][1] = i;
    }
    qsort(result, matSize, sizeof(result[0]), compare);
    int *ans = (int *) malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) {
        ans[i] = result[i][1];
    }
    *returnSize = k;
    return ans;
}
