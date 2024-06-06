#include <stdio.h>

// Hàm tính toán hiệu suất nhiên liệu (dặm/gallon)
void tinhHieuSuatNhienLieu(int phut, float tocDo, float xangTieuThu) {
    // Quy đổi phút sang giờ
    float gio = phut / 60.0;
    // Tính quãng đường đi được
    float quangDuong = tocDo * gio;
    // Tính hiệu suất nhiên liệu
    float hieuSuat = quangDuong / xangTieuThu;
    printf("Hieu suat nhien lieu: %.2f dặm/gallon\n", hieuSuat);
}

// Hàm tính quãng đường đã đi (km)
void tinhQuangDuong(float banKinhLop, int soVongQuay) {
    // Quy đổi bán kính từ inch sang mét (1 inch = 0.0254 mét)
    float banKinhMet = banKinhLop * 0.0254;
    // Tính chu vi lốp
    float chuViLop = 2 * 3.14159265358979323846 * banKinhMet;
    // Tính quãng đường đi được (mét)
    float quangDuongMet = chuViLop * soVongQuay;
    // Quy đổi quãng đường từ mét sang km
    float quangDuongKm = quangDuongMet / 1000.0;
    printf("Quang duong di duoc: %.2f km\n", quangDuongKm);
}

// Hàm tính toán hiệu suất nhiên liệu được sửa đổi (dặm/gallon)
void tinhHieuSuatNhienLieuSuaDoi(float banKinhLop, int soVongQuay, float xangTieuThu) {
    // Quy đổi bán kính từ inch sang mét (1 inch = 0.0254 mét)
    float banKinhMet = banKinhLop * 0.0254;
    // Tính chu vi lốp
    float chuViLop = 2 * 3.14159265358979323846 * banKinhMet;
    // Tính quãng đường đi được (mét)
    float quangDuongMet = chuViLop * soVongQuay;
    // Quy đổi quãng đường từ mét sang dặm (1 mét = 0.000621371 dặm)
    float quangDuongDam = quangDuongMet * 0.000621371;
    // Tính hiệu suất nhiên liệu
    float hieuSuat = quangDuongDam / xangTieuThu;
    printf("Hieu suat nhien lieu sua doi: %.2f dặm/gallon\n", hieuSuat);
}

int main() {
    int functionChoice;
    printf("Chọn chức năng: ");
    printf("\n1: Tính hiệu suất nhiên liệu.");
    printf("\n2: Tính quãng đường.");
    printf("\n3: Tính hiệu suất nhiên liệu chuyển đổi.");
    printf("\nLựa chọn của bạn là: ");
    scanf("%d", &functionChoice);
    switch (functionChoice){
    case 1:{
        int phut;
        float tocDo, xangTieuThu;
        printf("Nhap so phut xe da di: ");
        scanf("%d", &phut);
        printf("Nhap toc do cua o to (dặm/giờ): ");
        scanf("%f", &tocDo);
        printf("Nhap luong xang tieu thu (gallon): ");
        scanf("%f", &xangTieuThu);
        tinhHieuSuatNhienLieu(phut, tocDo, xangTieuThu);
        break;
    }
    case 2:{
        float banKinhLop;
        int soVongQuay;
        printf("Nhap ban kinh lop (inch): ");
        scanf("%f", &banKinhLop);
        printf("Nhap so vong quay cua lop: ");
        scanf("%d", &soVongQuay);
        tinhQuangDuong(banKinhLop, soVongQuay);
        break;     
    }
    case 3:{
        float banKinhLop, xangTieuThu;
        int soVongQuay;
        printf("Nhap ban kinh lop (inch): ");
        scanf("%f", &banKinhLop);
        printf("Nhap so vong quay cua lop: ");
        scanf("%d", &soVongQuay);
        printf("Nhap luong xang tieu thu sua doi (gallon): ");
        scanf("%f", &xangTieuThu);
        tinhHieuSuatNhienLieuSuaDoi(banKinhLop, soVongQuay, xangTieuThu);
        break;
    }
    default:
        printf("Khong co chuc nang nay.\n");
        break;
    }
    return 0;
}
