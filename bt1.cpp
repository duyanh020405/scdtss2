#include <stdio.h>

int main()
{
    int arr[5];
    int max = 0;
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Gia tri lon nhat la: %d\n", max);

    return 0;
}

