#include<iostream>
#include<algorithm>
using namespace std;
bool sx(int a,int b){
	
	return a>b;
	};
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	sort(a,a+n,sx);
	int f=0;
	while(n>1){
		 a[n-2]=a[n-1]+a[n-2];
		f=f+a[n-2];
		n--;
		sort(a,a+n,sx);
		}
	cout<<f<<endl;
return 0;
}

