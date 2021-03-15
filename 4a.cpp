#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector <int> st;
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
    if(s1=="push") st.push_back(T);
    if(s1=="pop") st.pop_back();
    if(s1=="show") {
    	if(st.empty()==1) cout<<"empty"<<endl;
    	else{
    	for(int i=0;i<st.size();i++)
    	cout<<st[i]<<" ";cout<<endl;
		}
	    }
		
	}

int main(){
	while(st.size()<200){p
	xuly();
    }
return 0;
}

