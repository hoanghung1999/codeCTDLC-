#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void xuly(){
	string s;
	cin>>s;
	vector <int> b(100,1);
	for(int i=0;i<s.length();i++){
        
		if(s[i]-'0'>1) break;
		else if(s[i]-'0'==0) b[i]=0;
		}
		int kq=pow(2,s.length());
		int c=0;
	for(int i=s.length()-1;i>=0;i--){

		if(b[i]==0) kq-=pow(2,c);
		c++;
		}
		cout<<kq-1<<endl;
	}
int main(){
      int T;
      cin>>T;
      while(T--){
      xuly();
     
		  }
return 0;
}

