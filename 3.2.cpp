#include<iostream>
#include<algorithm>
using namespace std;
struct work{
	int f;
	int s;
};
bool sx(work a,work b){
	return a.f<b.f;
	}
int kq(work w[],int n){
	int s=1,k=1;
	for(int i=2;i<=n;i++){
		if(w[k].f<=w[i].s){
			s++;
			k=i;
			}
	}
	return s;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		work w[n+1];
		for(int i=1;i<=n;i++){
			cin>>w[i].s>>w[i].f;
			}
			sort(w+1,w+n+1,sx);
			
		cout<<kq(w,n)<<endl;
		}
	}
