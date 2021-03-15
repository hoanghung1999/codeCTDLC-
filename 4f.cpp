#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int TRUE(char y1 ,char y2){
	if(y1=='(' && y2==')') return 1;
	if(y1=='[' && y2==']') return 1;
	if(y1=='{' && y2=='}') return 1;
	return 0;
}
int  xuly(){
	char s[100000];
	cin.getline(s,100000);
	stack <char> st;
	for(int i=0;i<strlen(s);i++){
	if(s[i]=='{' ||s[i]=='[' ||s[i]=='('){
		st.push(s[i]);
	}
	else {
		if(TRUE( st.top() ,s[i] )==1){
			st.pop();
		}
		else {
		cout<<"NO"<<endl;
		return 0;
	    }
	}
	}
	cout<<"Yes"<<endl;
}
int main(){
	xuly();
return 0;
}

