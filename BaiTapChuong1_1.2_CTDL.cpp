// Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này.
// Khái niệm hỗn số: Hỗn số là sự kết hợp giữa một số nguyên và một phân số số nguyên sẽ đứng ở đầu hỗn số, phần phân số trong hỗn số luôn nhỏ hơn 1.

#include <stdio.h>

typedef struct HonSo
{
	int phanNguyen, tuSo, mauSo;
} HONSO;

void nhapPhanSo(HONSO &ps)
{
	printf("Nhap phan nguyen = "); scanf("%d", &ps.phanNguyen);
	printf("Nhap tu so = "); scanf("%d", &ps.tuSo);
	printf("Nhap mau so = "); scanf("%d", &ps.mauSo);
	while ((ps.mauSo == 0) || (ps.tuSo > ps.mauSo))
	{
		printf("Nhap mau so = "); scanf("%d", &ps.mauSo);
	}
}

void xuatPhanSo(HONSO ps)
{
	printf("\nPhan nguyen = %d\n", ps.phanNguyen);
	printf("Phan tu so = %d\n", ps.tuSo);
	printf("Nhap mau so = %d\n", ps.mauSo);
}

int main()
{
	HONSO test;
	nhapPhanSo(test);
	xuatPhanSo(test);
}