#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100 /* �w�q�W�r���̤j���� */

/* �����Ӧr�ꪺ�j�p�A�Ω� qsort �Ƨ� */
int cmp(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n;
    scanf("%d", &n); /* Ū�J�H�� */

    char **names = (char **)malloc(n * sizeof(char *)); /* �w�q�@�ӫ��w�ƲաA�Ω�s�x�W�r */
    for (int i = 0; i < n; i++) {
        names[i] = (char *)malloc((MAX_NAME_LEN + 1) * sizeof(char)); /* �C�ӦW�r���ʺA���t�Ŷ� */
        scanf("%s", names[i]); /* Ū�J�W�r */
    }

    qsort(names, n, sizeof(char *), cmp); /* �Ƨ� */

    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]); /* ��X�Ƨǫ᪺�W�r */
        free(names[i]); /* ����W�r���Ŷ� */
    }
    free(names); /* ������w�Ʋժ��Ŷ� */

    return 0;
}

/*THIS CODE IS MY OWN WORK. IT WAS WRITTEN WITHOUT CONSULTING CODE WRITTEN BY OTHER STUDENTS OR ANY ONE WHO IS NOT AWARE OF MY REFERENCE. 410125034 ���\ʹ*/
