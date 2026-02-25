/******************************************************************************
 * Họ và tên: [LUC VAN VIET]
 * MSSV:      [PS49691]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n;
    int a[100];

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Nhap mang
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Gan gia tri ban dau
    int min = a[0];
    int max = a[0];

    // Tim min va max
    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

    printf("Gia tri nho nhat trong mang = %d\n", min);
    printf("Gia tri lon nhat trong mang = %d\n", max);

    return 0;
}