#include <stdio.h>

int main() {
    int n;
    
    // Nh?p s? ph?n t? trong m?ng (0 < n <= 100)
    printf("Nh?p s? ph?n t? trong m?ng (0 < n <= 100): \n");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("S? ph?n t? kh�ng h?p l?.\n");
        return 1;
    }

    int arr[n];  // Khai b�o m?ng v?i k�ch thu?c n

    // Nh?p c�c ph?n t? trong m?ng
    printf("Nh?p c�c ph?n t? trong m?ng: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    // Nh?p ph?n t? c?n x�a
    printf("Nh?p k (ph?n t? c?n x�a): \n");
    scanf("%d", &k);

    // T�m ph?n t? k trong m?ng v� x�a n�
    int found = 0;  // Bi?n flag d? ki?m tra xem c� ph?n t? k trong m?ng kh�ng
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            // N?u t�m th?y ph?n t? k, d?ch chuy?n c�c ph?n t? ph�a sau sang tr�i
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  // Gi?m k�ch thu?c m?ng sau khi x�a
            found = 1;  // ��nh d?u l� d� t�m th?y v� x�a
            break;  // D?ng v�ng l?p khi d� x�a ph?n t? k
        }
    }

    // Ki?m tra n?u kh�ng t�m th?y ph?n t? k
    if (found == 0) {
        printf("Kh�ng c� ph?n t? %d trong m?ng\n", k);
    } else {
        // In m?ng sau khi x�a
        printf("M?ng sau khi x�a ph?n t? %d: \n", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

