/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // khai bao bien 
    const float PI = 3.14;
    float ban kinh;
    float chu_vi, dien_tich;
    // nhap du lieu
    printf ("Nhap ban kinh hinh tron: ");
    scanf ("%f", &ban kinh );
    // xu ly, tinh toan
    chu_vi = 2 * PI * ban kinh ;
    dien_tich = PI * ban kinh * ban kinh ;
    // hien thi ket qua
    printf ("Chu vi hinh tron = %.2f\n", chu_vi);
    printf ("Dien tich hinh tron = %.2f\n", dien_tich);
}




