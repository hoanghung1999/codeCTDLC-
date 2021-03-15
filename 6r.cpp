#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> truoc(100,0);
vector<int> chuaxet(100,0);
void DFS(int u,int n,vector<vector<int> > a ){
	for(int i=1;i<=n;i++) chuaxet[i]=0;
	chuaxet[u]=1;
	stack<int> st;
	st.push(u);
	while(!st.empty()){
		int s=st.top();st.pop();
		for(int i=1;i<=n;i++){
			if(a[s][i]==1 && chuaxet[i]==0){
				chuaxet[i]=1;
				st.push(s);
				st.push(i);
				truoc[i]=s;
				break;
			}
		}
	}
	}
void hienthidgdi(int s,int t){
	cout<<t<<" ";
	while(truoc[t]!=s){
		cout<<truoc[t]<<" ";
		t=truoc[t];
	}
	cout<<s<<endl;
	
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,M;
		vector<vector<int> > a(100,vector<int>(100,0));
		cin>>N>>M;
		for(int i=0;i<M;i++){
			int u,v;
			cin>>u>>v;
			a[u][v]=1;
			}
	
		int Q;
		cin>>Q;
		while(Q--){
			int x,y;
			cin>>x>>y;
			
			DFS(x,N,a);
			if(truoc[y]!=0) {
				cout<<"yes"<<endl;
				hienthidgdi(x,y);
			}
			else cout<<"NO";
		}	
		}
return 0;
}

