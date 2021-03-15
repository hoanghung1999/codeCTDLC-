#include<iostream>
using namespace std;
int a[100],n,ok=1;
void init(){
   
	for(int i=1;i<100;i++)
	a[i]=1;
}
void sinhnp(){
	int i=n;
	while(i>0 && a[i]==0) {
	a[i]=1;
	i--;
    }
	if(i>0){
		a[i]=0;
	}
	else ok=0;
	
}

void hienthi(){
	for(int i=1;i<=n;i++)
	cout<<a[i];
	cout<<endl;
	}
void xuly(){
	string s;
	getline(cin,s);
	int c1=0;
	for(int i=0;i<s.length();i++)
	if(s[i]=='(') c1++;
	n=c1;
	
	while(ok){
	sinhnp();
	hienthi();
	int count1=1,count2=n ;
	for(int i=0;i<s.length();i++){
	    if(s[i]=='('){
		if(a[count1]==1) cout<<s[i];
		count1++;
		}
		else if(s[i]==')'){
			if(a[count2]==1) cout<<s[i];
			count2--;
			}
			else cout<<s[i];
	 
	}
	cout<<endl;
	}
}

int main(){
    init();
	xuly();
  
    
return 0;
}

