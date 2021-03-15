#include<iostream>
using namespace std;
void xuly(int n){
	int k1=n/7;
	int du=n%7;
	
	if(du%4!=0) cout<<-1<<endl;
	else {
		int k2=du/4;
	int a[k2+k1+1];
	for(int i=1;i<k1+k2+1;i++){
		if(i<=k2) cout<<4;
		else cout<<7;
	}
	cout<<endl;
	}
}
int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		int n;
		cin>>n;
		xuly(n);	}
return 0;
}

