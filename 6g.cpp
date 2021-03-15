#include<iostream>
#include<cmath>
#define Max 100001
#include<vector>
using namespace std;
int xuly(int s,int a[],int n){
	int max=0,T=0;
	for(int i=s;i<n;i++){
		if((i-s)%2==0)
		T+=abs(a[i]-a[i+1]);
		else 
		T+=-abs(a[i]-a[i+1]);
		if(T>max) max=T;
	}
	return max;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int A[n+1];
		for(int i=1;i<=n;i++) cin>>A[i];
		int max=0;
	    for(int i=1;i<n;i++){
	    	int s=xuly(i,A,n);
	    	if(s>max) max=s;
		}
		cout<<max<<endl;
	}
return 0;
}

