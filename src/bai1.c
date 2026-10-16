#include <stdio.h>

// --- INTERFACE BẮT BUỘC - KHÔNG ĐỔI CHỮ KÝ HÀM ---
float nhapSanLuongWh();
float doiWhSangKwh(float wh);
float tinhTienDien(float kwh, float donGia);

#ifndef UNIT_TEST
int main() {
  float wh = nhapSanLuongWh();
  float kwh = doiWhSangKwh(wh);
  float donGia = 3000.0; // Đơn giá ví dụ: 3000 VNĐ/kWh
  float tongTien = tinhTienDien(kwh, donGia);

  printf("\n--- HOA DON SAC XE ---");
  printf("\nSan luong: %.2f Wh", wh);
  printf("\nSan luong quy doi: %.2f kWh", kwh);
  printf("\nTong tien: %.2f VND\n", tongTien);

  return 0;
}
#endif

// --- SINH VIÊN VIẾT CODE CÁC HÀM DƯỚI ĐÂY ---
float nhapSanLuongWh() {
  float wh;

  do {
    printf("Nhap san luong (Wh > 0): ");
    scanf("%f", &wh);

    if (wh <= 0) {
      printf("Gia tri khong hop le! Vui long nhap lai.\n");
    }
  } while (wh <= 0);

  return wh;
}

float doiWhSangKwh(float wh) {
  return wh / 1000.0f;
}

float tinhTienDien(float kwh, float donGia) {
  return kwh * donGia;
}
