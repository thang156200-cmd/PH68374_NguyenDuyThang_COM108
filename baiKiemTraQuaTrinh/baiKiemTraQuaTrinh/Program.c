// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>

int tongsochan(int n) {
    int sum = 0;
    for (int i = 2; i < n; i += 2) {
        sum += i;
    }
    return sum;
}
void kiemtrachanle(int x)
{
    if (x % 2 == 0)
        printf("-> %d la so chan\n", x);
    else
        printf("-> %d la so le\n", x);
}

int binhphuong(int n) {
    return n * n;
}
int tbcsole(int n) {
    int sum = 0, count = 0;
    for (int i = 1; i < n; i += 2) {
        sum += i;
        count++;
    }
    return sum / count;
}


int main()
{
    int chon, n;
    do
    {
        printf("\n===== MENU =====\n");
        printf("0. Thoat.\n");
        printf("1. Tinh tong so chan tu 1 den N.\n");
        printf("2. Binh phuong cua N la so chan hay le?\n");
        printf("3. Tinh trung binh cong so le tu 1 den N.\n");
        printf("4. Trung binh cong so le la chan hay le?\n");
        printf("Moi ban chon: ");
        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("nhap so nguyen duong n (>10): ");
            scanf_s("%d", &n);
            if (n <= 10) {
                printf("n phai lon hon 10!\n ");
                break;
            }
            int tong;
            tong = tongsochan(n);
            printf("tong cac so chan tu 1 den %d = %d\n", n, tong);
            printf("binh phuong cua tong: %d\n", tong * tong);
            kiemtrachanle(tong * tong);
            break;
        case 2:
            printf("Nhap N (>10): ");
            scanf_s("%d", &n);
            if (n <= 10) {
                printf("N phai lon hon 10!\n");
                break;
            }
            int bp;
            bp = binhphuong(n);
            printf("binh phuong cua %d = %d", n, bp);
            kiemtrachanle(bp);
            break;
        case 3:
            printf("Nhap N (>10): ");
            scanf_s("%d", &n);
            if (n <= 10) {
                printf("N phai lon hon 10!\n");
                break;
            }
            int t;
            t = tbcsole(n);
            printf("Trung binh cong so le tu 1 -> %d = %d\n", n, t);
            break;
        case 4:
            kiemtrachanle(t);
        }
    } while (chon != 0);
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