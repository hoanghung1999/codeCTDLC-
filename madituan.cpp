#include<iostream>
#include<stdio.h>
#define MAX 8
using namespace std;
 
int A[MAX][MAX] = { 0 };//Kh?i t?o m?ng giá tr? 0
int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
int dem = 0;//S? bu?c di
int n;
void xuat(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
	}
void  dichuyen(int x,int y){
	A[x][y]=++dem;
	for(int i=0;i<8;i++){
		
	if(dem==n*n){
		xuat();
		exit(0);
		}
	int u=x+X[i],v=y+Y[i];
	if(u>=0 && u<n && v>=0 && v<n && A[u][v]==0)
	dichuyen(u,v);
	}
	dem--;
	A[x][y]=0;
	}
//void dichuyen(int x, int y) {
//    ++dem;//Tang giá tr? bu?c di
//    A[x][y] = dem;//Ðánh d?u dã di
//    for (int i = 0; i < 8; i++)    {
//        //Ki?m tra xem mã dã di h?t bàn c? chua
//        if (dem == n * n) {
//            cout << "Cac buoc di la: \n";
//            xuat();
//            exit(0);//k?t thúc chuong trình
//        }
//        //N?u chua di h?t bàn c? thì t?o bu?c di m?i
//        int u = x + X[i];//t?o m?t v? trí x m?i
//        int v = y + Y[i];//t?o m?t v?i trí y m?i
//        //N?u h?p l? thì ti?n hành di chuy?n
//        if (u >= 0 && u < n&&v >= 0 && v < n&& A[u][v] == 0)
//            dichuyen(u, v);
//    }
//    //N?u không tìm du?c bu?c di thì ta ph?i tr? l?i các giá tr? ban d?u
//    --dem;
//    A[x][y] = 0;
//}
int main(){
	cout<<"nhap n:";
	cin>>n;
	int a,b;
	cout<<"nhap x,y:";
	cin>>a>>b;
	dichuyen(a,b);
return 0;
}

