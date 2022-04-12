// Ho va ten : Nguyen Tien Dat
// Mssv: 6251071019
#include<stdio.h>
#define MAX 100
void nhap (int a[], int &n)
{
	printf("\nNhap so phan tu day:  ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
    printf("Cac phan tu cua day : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%2d\t", a[i]);
    }
}
void Dem(int a[], int n, float x, float y){
	int dem=0;
	printf("\n Nhap 2 so thuc:\n ");
	printf(" x =");
	scanf(" %2f", &x);
	printf(" y =");
	scanf(" %2f", &y);
	if( x<y&& y<=n){
		for( int i=0; i<y;i++){
			if(a[i]%5==2)
				dem++;
		}
	}
	 else if(x<y&&y>n){
			for( int i=0; i<n;i++){
			if(a[i]%5==2)
				dem++;
	}
	
}
	else if(x>y&&x>n){
			for( int i=0; i<n;i++){
			if(a[i]%5==2)
				dem++;
			}
		}
	else if(x>y&&x<=n){
			for( int i=0; i<x;i++){
			if(a[i]%5==2)
				dem++;
			}
		}
	printf(" \nSo cac phan tu chia 5 du 2 trong khoang [ %2f,%2f] la : %d ", x,y,dem );
}
int main(){
	int n;
	int arr[MAX];
	float x,y;
	nhap(arr,n);
	xuat(arr,n);
	Dem(arr , n,x,y);
	
}
