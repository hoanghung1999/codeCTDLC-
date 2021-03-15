#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
vector <int> road[50000];
int dem=0;
int chuaxet[100001];
//void DFS(int u){
//	dem++;
//	chuaxet[u]=0;
//	for(int i=0;i<road[u].size();i++){
//		if(chuaxet[road[u][i]]==1){
//			DFS(road[u][i]);
//		}
//		}
//	}
void DFS(int u){
	stack<int> st;
	st.push(u);
	chuaxet[u]=0;
	dem++;
	while(!st.empty()){
		int s=st.top();st.pop();
		for(int i=0;i<road[s].size();i++){
			if(chuaxet[road[s][i]]){
				dem++;
				chuaxet[road[s][i]]=0;
				st.push(s);
				st.push(road[s][i]);
				break;
			}
		}
	}
}


void init(int N){
     for(int i=1;i<=N;i++) chuaxet[i]=1,road[i].clear();
}
int timmax(int N){
	int max=0;
	for(int i=1;i<=N;i++){
		if(chuaxet[i]==1) {
			dem=0;
			DFS(i);
			if(dem>max) max=dem;
		}
	}
	return max;
}
int main(){

	int T;
	cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		init(N);
		while(M--){
			int a,b;
			cin>>a>>b;
	
		road[a].push_back(b);
		road[b].push_back(a);
				}
        cout<<timmax(N)<<endl;
		}
return 0;
}

