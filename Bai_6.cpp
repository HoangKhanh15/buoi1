#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	char hoTen[100];
	int ngaySinh, thangSinh, namSinh;
	char gioiTinh;
	setlocale(LC_ALL, "vi_VN.UTF-8");
	printf("Nhap ho ten: ");
	scanf_s("%s", hoTen);
	printf("Nhap ngay thang nam sinh (dd mm yyyy): ");
	scanf_s("%d %d %d", &ngaySinh, &thangSinh, &namSinh);
	printf("Nhap gioi tinh (N hoac n cho nam, C hoac c cho nu): ");
	scanf_s(" %c", &gioiTinh);

	// Tính tuổi nghỉ hưu
	int tuoiHuu;
	if (gioiTinh == 'N' || gioiTinh == 'n') {
		// Nam
		tuoiHuu = 62;
	}
	else if (gioiTinh == 'C' || gioiTinh == 'c') {
		// Nữ
		tuoiHuu = 60;
	}
	else {
		printf("Gioi tinh hop le.\n");
		return 1;
	}

	int tuoiHienTai = 2024 - namSinh;
	int thoiGianNghiHuu = tuoiHuu - tuoiHienTai;

	if (thoiGianNghiHuu > 0) {
		printf("Nguoi lao dong %s se duoc nghi huu %d nam.\n", hoTen, thoiGianNghiHuu);
	}
	else {
		printf("Nguoi lao dong %s da du tuoi nghi huu.\n", hoTen);
	}

	system("pause");
	return 0;
}
