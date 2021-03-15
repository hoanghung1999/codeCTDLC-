#include<iostream>
#include<queue>
using namespace std;
void pop(queue <int> &st){
	if(!st.empty())
	st.pop();
}
void  first(queue <int> st){
    if(st.empty()) cout<<"NONE"<<endl;
   
    else cout<<st.front()<<endl;
}
void push(queue <int> &st,int x){
	st.push(x);
}
void xuly(queue <int> &st){
	string s;
	cin>>s;
	if(s=="POP") pop(st);
	else if (s=="PRINTFRONT") first(st);
	     else if(s=="PUSH"){
	     	int x;
	     	cin>>x;
	     	push(st,x);
		 }
}
int main(){
	int Q;
	cin>>Q;
	cin.ignore();
	queue <int> st;
	while(Q--){
		xuly(st);
	}
return 0;
}

