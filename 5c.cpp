#include<bits/stdc++.h>
using namespace std;
deque <int> mydeque;
void Pushf(int x){
mydeque.push_front(x);
} 
void Printf(){
	if(!mydeque.empty()) cout<<mydeque.front()<<endl;
	else cout<<"NONE"<<endl;
	}
void Popf(){
	if(!mydeque.empty()) mydeque.pop_front();
	}
void Pushb(int x){
	mydeque.push_back(x);
}
void Printb(){
	if(!mydeque.empty()) cout<<mydeque.back()<<endl;
	else cout<<"NONE"<<endl;
	}
void Popb(){
	if(!mydeque.empty()) mydeque.pop_back();
	}
 
int main(){
      int Q;
      cin>>Q;
      cin.ignore();
      while(Q--){
      	string s;
      	cin>>s;
      	if(s=="PUSHFRONT"){
      		int x;
      		cin>>x;
      		Pushf(x);
		  }
		  else if(s=="PRINTFRONT"){
		  	Printf();
		  }
		  else if(s=="POPFRONT"){
		  	Popf();
		  }
		  else if(s=="PUSHBACK"){
		  	int x;
		  	cin>>x;
		  	Pushb(x);
		  }
		  else if(s=="PRINTBACK"){
		  	Printb();
		  }
		  else if(s=="POPBACK"){
		  	Popb();
		  }
	  }
return 0;
}

