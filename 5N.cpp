#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int j=i-1;
		int t=a[i];
		while(j>=0 && t<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		cout<<"Buoc "<<i-1<<": ";
		for(int k=1;k<=i;k++) cout<<a[k]<<" ";
		cout<<endl;
	}
return 0;
}

