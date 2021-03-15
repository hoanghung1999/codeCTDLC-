#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int vt=0;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) if(a[i]==k) {
			vt=i;
			break;
		}
		if(vt==0) cout<<"NO"<<endl;
		else cout<<vt<<endl;
	}
return 0;
}

