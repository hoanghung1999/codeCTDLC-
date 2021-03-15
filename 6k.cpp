#include<iostream>
using namespace std;
int xuly(int c,string s){
    if(s[c]==s[c+1]){
    	for(int i=1;i<c;i++){
    		if(s[c-i]!=s[c+i+1]) return 2*i;
			}
			return 2*c;
    	}
	for(int i=1;i<c;i++){
		if(s[c-i]!=s[c+i]) return 2*i-1;
	}
	return 2*c-1;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		string S;
		cin>>S;
		S=" "+S;
		int max=0;
		for(int i=1;i<S.length();i++){
		
			if(xuly(i,S)>max) max=xuly(i,S);
		}
		cout<<max<<endl;
	}
return 0;
}

