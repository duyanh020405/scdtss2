#include <stdio.h>

void sapXepTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, m;

    // Nh?p s? lý?ng ph?n t? c?a m?ng ð?u tiên
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap so thu [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nh?p s? lý?ng ph?n t? c?a m?ng th? hai
    printf("Nhap m: ");
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++) {
        printf("Nhap so [%d]: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int arr3[n + m];
    for (int i = 0; i < n; i++) {
        arr3[i] = arr[i];
    }
    for (int i = 0; i < m; i++) {
        arr3[n + i] = arr2[i];
    }

    // S?p x?p m?ng h?p nh?t
    sapXepTangDan(arr3, n + m);
    printf("Mang tang dan:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

