#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
	}
int main(){
	int n;
	cin>>n;
	pair<int,int> A[n];
	for(int i=0;i<n;i++) cin>>A[i].first>>A[i].second;
	sort(A,A+n,cmp);
	int T=0;
	T=A[0].first+A[0].second;
	for(int i=1;i<n;i++){
		if(T<A[i].first) T=A[i].first+A[i].second;
		else T+=A[i].second;
		}
	cout<<T<<endl;
return 0;
}

