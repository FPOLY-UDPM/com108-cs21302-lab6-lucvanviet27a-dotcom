/******************************************************************************
 * Họ và tên: [LỤC VĂN VIỆT]
 * MSSV:      [PS49691]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;
    int a[100];
    int tong = 0, dem = 0;
    float trungBinh;

    
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);


    for(int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }


    for(int i = 0; i < n; i++) {
        if(a[i] % 3 == 0) {
            tong += a[i];
            dem++;
        }
    }


    if(dem > 0) {
        trungBinh = (float)tong / dem;
        printf("Trung binh cac so chia het cho 3 la: %.2f", trungBinh);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang");
    }

    return 0;
}
