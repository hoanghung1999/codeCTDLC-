#include<iostream>
#include<cctype>
#include<stack>
using namespace std;
int ut(char c){
	if(c=='(') return 1;
	if(c== '+' || c=='-' ) return 2;
	if(c=='*' ||c=='/') return 3;
	if(c=='^' ) return 4;
}
void hauto(){
	string s;
	cin>>s;
	stack <char> st;
	for(int i=0;i<s.length();i++){
		char c=s[i];
		if(c=='(') st.push(c);
		   else if(isalpha(c)) cout<<c;
		        else if(c==')'){
		        	while(st.top()!='('){
		        		cout<<st.top()<<" ";
		        		st.pop();
					}
					st.pop();
				}
				    else{
				    	cout<<" ";
				    	while(!st.empty()&&( ut(c) <=ut(st.top()) )){
				    		cout<<st.top()<<" ";
				    		st.pop();
						}
						st.push(c);
					}
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main(){
	hauto();
return 0;
}

