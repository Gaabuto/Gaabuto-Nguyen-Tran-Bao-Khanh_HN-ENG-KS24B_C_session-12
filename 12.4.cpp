#include <stdio.h>

int findMax(int ar[], int a) {
    int max = ar[0]; 
    for (int i = 1; i < a; i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
    }
    return max;
}

int main() {
    int a;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &a);

    int ar[a];

    for (int i = 0; i < a; i++) {
        printf("moi ban nhap phan tu thu %d: ", i + 1);
        scanf("%d", &ar[i]);
    }

    printf("So lon nhat trong mang la: %d\n", findMax(ar,a));

    return 0;
}
