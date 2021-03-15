#include<bits/stdc++.h>
using namespace std;
int parent[100001];
void makeset(int N){
	for(int i=1;i<=N;i++) parent[i]=i;
}
int find(int x){
	if(x==parent[x]) return x;
	else parent[x]=find(parent[x]);
}
void Union(int x,int y){
	parent[x]=y;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		makeset(N);
		while(M--){
			int u,v;
			cin>>u>>v;
			int rootu=find(u);
			int rootv=find(v);
			if(rootu != rootv ) Union(rootu,rootv);
		}
		int max[N+1];
	    for(int i=1;i<=N;i++) max[i]=0;
		for(int j=1;j<=N;j++){
			int s=find(j);
			max[s]++;
		}
		int kq=*max_element(max+1,max+N+1);
		cout<<kq<<endl;
	}
return 0;
}

