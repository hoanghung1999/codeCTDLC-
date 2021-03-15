#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
int F[500000];

priority_queue<int,vector<int>,greater<int> > a;
void result(char s[]){
	for(int i=0;i<strlen(s);i++){
		F[i]=s[i]-'0';
		a.push(F[i]);
	}
	int k; cin>>k;
	for(int j=0;j<k-1;j++) a.pop();
	for(int i=0;i<strlen(s);i++){
		if(F[i]>a.top()) cout<<s[i];
	}
	
}
int main(){
	char s[500000];
	cin>>s;
	result(s);
return 0;
}

