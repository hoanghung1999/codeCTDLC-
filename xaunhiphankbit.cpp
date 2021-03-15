#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int a[20];
		memset(a,0,sizeof(a));
		int n,k;
		cin>>n>>k;
		for(int i=n-k+1;i<=n;i++) a[i]=1;
		do{
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<endl;
		} while(next_permutation(a+1,a+n+1));
	}
return 0;
}

