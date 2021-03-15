#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> A,pair<int,int> B){
	int c=A.second-A.first;
	int d=B.second-B.first;
	return c>d;
	}
int main(){
     int n,k;
     cin>>n>>k;
     pair<int,int> A[n];
     for(int i=0;i<n;i++) cin>>A[i].first;
     for(int j=0;j<n;j++) cin>>A[j].second;
     sort(A,A+n,cmp);
     int tien=0;
     for(int i=0;i<n;i++){
     	cout<<A[i].first<<" ";
     	
		 }
		 cout<<endl;
		for(int i=0;i<n;i++){
     	cout<<A[i].second<<" ";
     	
		 };
	for(int i=0;i<n;i++){
		if(i<k) tien+=A[i].first;
		else tien+=A[i].second;
		}
	cout<<tien;
return 0;
}

