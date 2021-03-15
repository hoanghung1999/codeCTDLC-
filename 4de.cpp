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
	string kq="";
	for(int i=0;i<s.length();i++){
		char c=s[i];
		if(c=='(') st.push(c);
		   else if(isalpha(c)) kq+=c;
		        else if(c==')'){
		        	while(st.top()!='('){
		        		kq+=st.top();
		        		st.pop();
					}
					st.pop();
				}
				    else{
				    	
				    	while(!st.empty()&&( ut(c) <=ut(st.top()) )){
				    		kq+=st.top();
				    		st.pop();
						}
						st.push(c);
					}
	}
	while(!st.empty()){
		kq+=st.top();
		st.pop();
	}
	cout<<kq<<endl;
}
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--)
	hauto();
return 0;
}

