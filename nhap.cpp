#include<iostream>
#include<deque>
#include<queue>
using namespace std;
void hienthi(priority_queue <int, vector<int>,greater<int> > x){
	while(!x.empty()){
		cout<<x.top();
		x.pop();
	}
	cout<<endl;
}
int main(){
		int n;
	cin>>n;
	int a[n];
	priority_queue <int, vector<int>,greater<int> > x;


	for(int i=0;i<n;i++) cin>>a[i];
   
	for(int i=0;i<n;i++){
        x.push(a[i]);
		hienthi(x);
		}
return 0;
}

