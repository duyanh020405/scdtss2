#include <stdio.h>
#include <stdlib.h>  // Required for qsort

int compareIntAsc(const void* a, const void* b) {
    int aNum = *(int*)a;
    int bNum = *(int*)b;
    return aNum - bNum;
}

int main() {
    int n;
    printf("Nhap so n trong mang: \n");
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Loi ");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap so thu [%d] trong mang: \n", i + 1);
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compareIntAsc);

    printf("Mang sau khi sap xep tang dan là: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}

