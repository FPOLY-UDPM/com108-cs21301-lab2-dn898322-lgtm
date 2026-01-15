/******************************************************************************
 * Họ và tên: [nguyễn tấn dương]
 * MSSV:      [ps47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    //// Khai báo biến
    float diem_toan, diem_ly, diem_hoa;
    float diem_trung_binh;

    // Nhập dữ liệu
    printf("Nhap diem mon Toan: ");
    scanf("%f", &diem_toan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &diem_ly);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &diem_hoa);

    // Xử lý, tính toán
    diem_trung_binh = (diem_toan * 3 + diem_ly * 2 + diem_hoa * 1) / (3 + 2 + 1);

    // Hiển thị kết quả
    printf("Diem trung binh = %.2f", diem_trung_binh);

}
