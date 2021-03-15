#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
stack <int> st;
void xuly(){
     string s,s1="",s2="";
     getline(cin,s);
     int i;
     for(i=0;i<s.length();i++){
     	if(s[i]!=' '||s[i]=='\0') s1=s1+s[i];
        else break;
		 }

	int T=0;
	 for(int c=i+1;c<s.length();c++){
	 	T=T*10+(s[c]-'0');

		 }
    if(s1=="push") st.push(T);
    if(s1=="pop") st.pop();
    if(s1=="print") {
    	if(st.empty()==1) cout<<"none"<<endl;
    	else{
    	cout<<st.top()<<endl;
		}
	    }
		
	}

int main(){
	int c=0,n=0;
	cin>>n;
	while(c<n){
	xuly();
	c++;
    }
return 0;
}

