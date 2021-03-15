#include<bits/stdc++.h>
using namespace std;

struct data{
	int s,e,c;
	data(){
	};
	data(int st,int en,int cost){
		s=st,e=en,c=cost;
	}
};
bool cmp(data x,data y){
	return x.c<y.c;
}
data E[200005];
int parent[200005],n,m,dh=0;
int findset(int i){
	if(parent[i]==0) return i;
	parent[i]=findset(parent[i]);
}
void solve(){
	memset(parent,0,sizeof(parent));
	for(int i=1;i<=m;i++){
		int roots=findset(E[i].s);
		int roote=findset(E[i].e);
		if(roots!=roote){
			parent[roots]=roote;
			dh=dh+E[i].c;
		}
	}
	cout<<dh<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N, M;
		cin>>N>>M;
		dh=0;
		n=N,m=M;
		for(int i=1;i<=M;i++){
			int u,v,c;
			cin>>u>>v>>c;
			E[i]=data(u,v,c);
		}
		sort(E+1,E+m+1,cmp);
		solve();
	}
return 0;
}

