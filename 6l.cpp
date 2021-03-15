#include<iostream>
#include<deque>
using namespace std;
int main(){
	string s;
	cin>>s;
	deque <char> st;
	for(int i=0;i<s.length();i++){
		if(st.empty()) st.push_back(s[i]);
		else if(st.back()==s[i]) st.pop_back();
		     else st.push_back(s[i]);
	}
	while(!st.empty()){
		cout<<st.front();
		st.pop_front();
	}
return 0;
}

