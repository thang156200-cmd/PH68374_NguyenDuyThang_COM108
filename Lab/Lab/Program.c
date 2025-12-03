// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>

void hoandoi(int*a,int*b) {
	int doi;
	doi = *a;
	*a = *b;
	*b = doi;
}



int main()
{
	int a, b;
	printf("Nhap gia tri a: ");
	scanf_s("%d", &a);
	printf("Nhap gia tri b: ");
	scanf_s("%d", &b);
	hoandoi(&a, &b);
	printf("Sau hoan doi, gia tri a: %d\n",a);
	printf("Sau hoan doi, gia tri b: %d\n",b);

}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184