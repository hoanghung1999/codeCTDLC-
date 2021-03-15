#include<iostream>
#include<stack>
using namespace std;
void xuly(){
	string s;
	getline(cin,s);
	int i=0;
	stack <char> st;
	int count=0;
	while(i<s.length()){
		if(st.empty() && s[i]==')'){
			count ++;
			st.push('(');
			}
			else if(s[i]== '('){
				st.push(s[i]);
				}
				 else if(s[i]==')'){
				 	st.pop();
					 }
		i++;
		}
	count=count+st.size()/2;
	cout<<count<<endl;
	
	}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	xuly();
	}
    
return 0;
}

