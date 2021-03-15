#include<iostream>
#include<queue>
using namespace std;
int dong[8]={2,2,1,1,-1,-1,-2,-2};
int cot[8]={-1,1,-2,2,-2,2,-1,1};
void BFS(int x,int y,int s,int t){
	int chuaxet[9][9],truoc[9][9];
	for(int i=1;i<=8;i++)
	for(int j=1;j<=8;j++) chuaxet[i][j]=1,truoc[i][j]=0;
	chuaxet[x][y]=0;
	pair<int,int> v=make_pair(x,y);
	queue<pair<int,int> > q;
	q.push(v);
	while(!q.empty() && truoc[s][t]==0){
		pair<int,int> temp=q.front();q.pop();
		for(int i=0;i<8;i++){
			int xx=temp.first+dong[i];
			int yy=temp.second+cot[i];
			if(xx>0 && xx<=8 && yy>0 && yy<=8 && chuaxet[xx][yy]==1){
				chuaxet[xx][yy]=0;
				truoc[xx][yy]=truoc[temp.first][temp.second]+1;
				q.push(make_pair(xx,yy));
			}
		}
	}
	cout<<truoc[s][t]<<endl;
	}
int chuso(char s){
	if(s=='a') return 1;
	if(s=='b') return 2;
	if(s=='c') return 3;
	if(s=='d') return 4;
	if(s=='e') return 5;
	if(s=='f') return 6;
	if(s=='g') return 7;
	if(s=='h') return 8;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		char X,U;
		int y,v;
		cin>>X>>y>>U>>v;
		int u=chuso(U),x=chuso(X);
		BFS(y,x,v,u);
		}
return 0;
}

