#include<iostream>
#include<vector>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		vector<vector<int> > a(N+1,vector<int>(N+1,0));
		while(M--){
			int u,v;
			cin>>u>>v;
			a[u][v]=1,a[v][u]=1;
			}
		vector<int> chuaxet(N+1,1);
		int s1[100],s2[100],top1=0,top2=0;
		for(int i=1;i<N;i++){
			if(chuaxet[i]){
			  s1[++top1]=i;
			  chuaxet[i]=0;
				for(int j=i+1;j<=N;j++){
					if(a[i][j] && chuaxet[j]) {
						s2[++top2]=j;
						chuaxet[j]=0;
					
					}
				}
			}
		}
	    for(int i=1;i<=top1;i++){
	    	for(int j=1;j<=top2;j++){
	    		if(a[s1[i]][s2[j]]) {
				cout<<"NO"<<endl; return 0;}
			}
		}
		cout<<"yes"<<endl;
		}
return 0;
}

