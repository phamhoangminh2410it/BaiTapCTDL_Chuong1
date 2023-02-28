/* Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một nhân viên (NHANVIEN).
Biết rằng một nhân viên gồm những thành phần sau:
--> Mã nhân viên: chuỗi tối đa 5 ký tự.
--> Tên nhân viên: chuỗi tối đa 30 ký tự.
--> Lương nhân viên: kiểu số thực
Sau đó, viết hàm nhập, xuất cho kiểu dữ liệu này. */

#include <stdio.h>

typedef struct NhanVien
{
	char maNV[5];
	char tenNV[30];
	float luongNV;
} NHANVIEN;

void nhapTTNV(NHANVIEN &nv)
{
	printf("Nhap ma nhan vien: "); gets(nv.maNV);
	printf("Nhap ten nhan vien: "); gets(nv.tenNV);
	printf("Nhap luong nhan vien: "); scanf("%f", &nv.luongNV); 
}

void xuatTTNV(NHANVIEN nv)
{
	printf("Ma nhan vien: %s\n", nv.maNV);
	printf("Ten nhan vien: %s\n", nv.tenNV);
	printf("Luong nhan vien: %.3f\n", nv.luongNV); 
}

int main()
{
	NHANVIEN nv1;
	nhapTTNV(nv1);
	xuatTTNV(nv1);
}