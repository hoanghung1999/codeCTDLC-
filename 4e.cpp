#include<iostream>
#include<stack>
using namespace std;
void xuly(){
	string s;
	getline(cin,s);
	stack <char> st;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		if(s[i]==')' && !st.empty()){
		st.pop();
		count=count+2;
		}
	 
		}	cout<<count<<endl;
	}
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		xuly();
	}
return 0;
}

