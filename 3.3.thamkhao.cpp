#include<iostream>
using namespace std;
void xuly(int n){
	if(n==0) cout<<-1<<endl;
	else{
	
	int k1=n/7;
	int du=n%7;
		int s=0;
	if(du%4!=0) cout<<-1<<endl;
	else {
		int k2=du/4;
	
	for(int i=1;i<k1+k2+1;i++){
		if(i<=k2) s=s*10+4;
		else s=s*10+7;
	}
		cout<<s<<endl;
	}
    }
}
int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		int n;
		cin>>n;
		xuly(n);	
		}
return 0;
}

