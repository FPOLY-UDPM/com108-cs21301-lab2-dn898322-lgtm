/******************************************************************************
 * Họ và tên: [nguyễn tấn dương]
 * MSSV:      [ps47990]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
  //khai bao bien 
  float chieu_dai, chieu_rong;
  float chu_vi, dien_tich;

  // nhap du lieu
  printf("Nhap chieu dai: ");
  scanf("%f", &chieu_dai);
  printf("Nhap chieu rong: ");
  scanf("%f", &chieu_rong);

  // xu ly, tinh toan
  chu_vi = (chieu_dai + chieu_rong) * 2;
  dien_tich = chieu_dai * chieu_rong;

  // hien thi ket qua
  printf("Chu vi hinh chu nhat = %.2f\n", chu_vi);
  printf("Dien tich hinh chu nhat = %.2f\n", dien_tich);

}
