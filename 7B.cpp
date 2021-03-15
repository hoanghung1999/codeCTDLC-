#include<iostream>
#include<queue>
using namespace std;
vector <int> road[1005];
vector <int> person;
int dem[1005],chuaxet[1005];
void DFS(int u){
	dem[u]++;
	chuaxet[u]=0;
	for(int i=0;i<road[u].size();i++){
		if(chuaxet[road[u][i]]==1){
			chuaxet[road[u][i]]=0;
			DFS(road[u][i]);
			}
		}
	}
int main(){
	int K,N,M;
	cin>>K>>N>>M;
	for(int i=1;i<=K;i++){
		int x;
		cin>>x;
		person.push_back(x);
		}
    for(int i=1;i<=M;i++){
    	int A,B;
    	cin>>A>>B;
    	road[A].push_back(B);
		}
	for(int i=1;i<=N;i++) dem[i]=0;
	for(int i=0;i<K;i++){
	for(int j=1;j<=N;j++) chuaxet[j]=1;
		DFS(person[i]);
	}
	int count=0;
	for(int i=1;i<=N;i++)
	if(dem[i]==K) count++;
	cout<<count<<endl;
    
return 0;
}

