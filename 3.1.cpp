#include<iostream>
using namespace std;
int a[10]={1,2,5,10,20,50,100,200,500,1000};
int soto(int tien){
	int c=9;
	int count=0;

while(tien>0){
	
	if(tien>=a[c]) {
		tien=tien-a[c];
		count++;
	}
	else c--;
}
return count;
}

int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		int tien;
		cin>>tien;
		cout<<soto(tien)<<endl;
		}
return 0;
}

