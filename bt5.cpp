#include <stdio.h>

int main() {
    int n;
    
    // Nh?p s? ph?n t? trong m?ng (0 < n <= 100)
    printf("Nh?p s? ph?n t? trong m?ng (0 < n <= 100): \n");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("S? ph?n t? không h?p l?.\n");
        return 1;
    }

    int arr[n];  // Khai báo m?ng v?i kích thu?c n

    // Nh?p các ph?n t? trong m?ng
    printf("Nh?p các ph?n t? trong m?ng: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    // Nh?p ph?n t? c?n xóa
    printf("Nh?p k (ph?n t? c?n xóa): \n");
    scanf("%d", &k);

    // Tìm ph?n t? k trong m?ng và xóa nó
    int found = 0;  // Bi?n flag d? ki?m tra xem có ph?n t? k trong m?ng không
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            // N?u tìm th?y ph?n t? k, d?ch chuy?n các ph?n t? phía sau sang trái
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  // Gi?m kích thu?c m?ng sau khi xóa
            found = 1;  // Ðánh d?u là dã tìm th?y và xóa
            break;  // D?ng vòng l?p khi dã xóa ph?n t? k
        }
    }

    // Ki?m tra n?u không tìm th?y ph?n t? k
    if (found == 0) {
        printf("Không có ph?n t? %d trong m?ng\n", k);
    } else {
        // In m?ng sau khi xóa
        printf("M?ng sau khi xóa ph?n t? %d: \n", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

