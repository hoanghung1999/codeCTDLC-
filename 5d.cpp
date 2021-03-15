#include<bits/stdc++.h>
using namespace std;
int digit[4];
void numtodigit(int num){
	for(int i=3;i>=0;i--){
		digit[i]=num%10;
		num/=10;
	}
}
int digittonum(int digit[]){
     return (digit[0]*1000+digit[1]*100+digit[2]*10+digit[3]);	
}
int snt[10005],key[10005];
void rieve(){
	
	for(int i=2;i<10000;i++){
		if(snt[i])
		for(int j=2*i;j<10000;j+=i){
		snt[j]=0;
		}
	}
}
int main(){
    memset(snt,-1,sizeof(snt));
	rieve();
	int T;
	cin>>T;
	while(T--){
	queue <int> x;
	int n,k;
	cin>>n>>k;
	memset(key,-1,sizeof(key));
	x.push(n);
	key[n]=0;
	while(!x.empty()){
		int s=x.front(); x.pop();
		
		for(int i=0;i<=3;i++){
			numtodigit(s);
			for(int j=0;j<=9;j++){
				digit[i]=j;
			    int y=digittonum(digit);
			    if(snt[y]==-1 && y>1000 && key[y]==-1){
			    	key[y]=key[s]+1;
			    	x.push(y);
				}
				
			}
		}
		
	}
	cout<<key[k]<<endl;
}
return 0;
}

