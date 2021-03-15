#include<iostream>
#include<queue>
using namespace std;
queue <int> st;
int size(queue <int> st){
	return st.size();
}
void  empty(queue <int> st){
	if(st.empty()){
	 cout<<"YES"<<endl;
    }
    else
	cout<<"NO"<<endl;
}
void push(queue <int> &st,int x){
	st.push(x);
}
void pop(queue <int> &st){
	if(!st.empty())
	st.pop();
}
int  first(queue <int> st){
    if(st.empty()) return -1;
    return st.front();
}
int last(queue <int> st){
	if(st.empty()) return -1;
    return st.back();
}
int main(){
	int T;
	cin>>T;
	while(T--){
		queue <int> st;
		int n;
		cin>>n;
		while(n--){
		
		int choice;
		cin>>choice;
		switch(choice){
			case 1:{
				cout<<size(st)<<endl;
				break;
			}
			case 2:{
		        empty(st);		
				break;
			}
			case 3:{
				int x;
				cin>>x;
				push(st,x);
				break;
			}
			
			case 4:{
				pop(st);
				break;
			}
			case 5:{
				cout<<first(st)<<endl;
				break;
			}
			case 6:{
				cout<<last(st)<<endl;
				break;
			}
		}
	
	
	}
	}
return 0;
}

