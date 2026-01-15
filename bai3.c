/******************************************************************************
 * Họ và tên: [Nguyễn Tấn dương]
 * MSSV:      [ps47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // khai bao bien 
    const float PI = 3.14;
    float ban_kinh;
    // nhap du lieu
    printf ("Nhap ban kinh hinh tron: ");
    scanf ("%f", &ban_kinh);
    // xu ly, tinh toan
    float chu_vi = 2 * PI * ban_kinh;
    float dien_tich = PI * ban_kinh * ban_kinh;
    // hien thi ket qua
    printf ("Chu vi hinh tron = %.2f\n", chu_vi);
    printf ("Dien tich hinh tron = %.2f\n", dien_tich);
}




