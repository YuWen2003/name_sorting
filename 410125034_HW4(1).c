#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100 /* 定義名字的最大長度 */

/* 比較兩個字串的大小，用於 qsort 排序 */
int cmp(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n;
    scanf("%d", &n); /* 讀入人數 */

    char **names = (char **)malloc(n * sizeof(char *)); /* 定義一個指針數組，用於存儲名字 */
    for (int i = 0; i < n; i++) {
        names[i] = (char *)malloc((MAX_NAME_LEN + 1) * sizeof(char)); /* 每個名字都動態分配空間 */
        scanf("%s", names[i]); /* 讀入名字 */
    }

    qsort(names, n, sizeof(char *), cmp); /* 排序 */

    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]); /* 輸出排序後的名字 */
        free(names[i]); /* 釋放名字的空間 */
    }
    free(names); /* 釋放指針數組的空間 */

    return 0;
}

/*THIS CODE IS MY OWN WORK. IT WAS WRITTEN WITHOUT CONSULTING CODE WRITTEN BY OTHER STUDENTS OR ANY ONE WHO IS NOT AWARE OF MY REFERENCE. 410125034 陳俞妏*/
