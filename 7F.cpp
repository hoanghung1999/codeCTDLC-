#include<iostream>
#include<vector>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		 vector <int> dinh[N+1];
		 vector <int> dem(N+1,0);
		while(M--){
			int u,v;
			cin>>u>>v;
			dinh[u].push_back(v);
			dem[u]++;
			dem[v]++;
			}
		int count=0;
		for(int i=1;i<=N && count==0;i++){
	    if(dem[i]!=0){
	    	for(int j=0;j<dinh[i].size();j++)
	    	if(dem[dinh[i][j]]!=dem[i]) {
	    		cout<<"NO"<<endl;
	    		count++;
	    		break;
			}
		}
        }
        if(count==0) cout<<"YES"<<endl;
	}
		
return 0;
}

