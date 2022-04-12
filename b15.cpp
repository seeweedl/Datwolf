// ho ten: Nguyen Tien Dat
//Mssv: 6251071019
#include<stdio.h>
#define MAX 10
void NhapMang(float a[],int n)
{
    for (int i=0;i<n;i++)
    {
     printf("\nNhap phan tu a[%d]: ",i);
     scanf("%f",&a[i]);
    }
}
void XuatMang(float a[MAX][MAX], int n, int m) 
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf ("%-3f", a[i][j]);
        }
        printf("\n");
    }
}
 
int main() 
{
    int n , m;
    float a[MAX][MAX];
    printf(" nhap so n ");
    scanf(" %d",&n);
    NhapMang(a, n,m);
    xuatMang(a, n, m);
 
    return 0;
}
