#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return (a.first-a.second)<(b.first-b.second);
}
int main(){
	int n,k;
	cin>>n>>k;
	pair<int,int> A[n];
	for(int i=0;i<n;i++) cin>>A[i].first;
	for(int j=0;j<n;j++) cin>>A[j].second;
	sort(A,A+n,cmp);
	int T=0;
	for(int i=0;i<n;i++){
		if(i<k) T+=A[i].first;
		else T+=A[i].second;
	}
	cout<<T<<endl;
return 0;
}

