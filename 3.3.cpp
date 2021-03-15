
#include<iostream>
using namespace std;
int n;
int a[2]={4,7};
int x[100],T=0,count=0;
void hienthi(){
	for(int i=1;i<=count;i++)
	cout<<x[i];
	cout<<endl;
	}
void NC(int i){
	for(int j=0;j<=1;j++){
	       x[i]=a[j];
	     
	       T+=x[i];
	       
	    if(T==n && count==0){
	     count=i;
		 hienthi();
	    }
   	    else if(T<n) {
		   NC(i+1);
	       }
         T=T-x[i];
	}
	}
void init(){
	cin>>n;
	for(int i=0;i<100;i++)
	x[i]=0;
	}
int main(){
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	init();
	NC(1);    
	if(count==0) cout<<-1<<endl;
	count=0;
    }
    return 0;
}
												   
