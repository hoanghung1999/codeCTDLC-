#include<iostream>
#include<algorithm>
using namespace std;
int Binary_search(int Y,int X[],int n ){
	int low=0,hight=n-1;
    int vt=0;
	while(low<=hight){
       int mid=(low+hight)/2;
       if(X[mid]==Y) return mid+1;
	   else if(X[mid]<Y){
	    vt=mid+1;
	    low=low+1;
		}else if(X[mid]>Y){
			hight=mid-1;
			}
	   } 
	   
	
	return vt;
	}
int main(){
        int n;
        cin>>n;
        int X[n];
        for(int i=0;i<n;i++) cin>>X[i];
        sort(X,X+n);
		int Q;
		cin>>Q;
		int Y[Q];
		for(int j=0;j<Q;j++) cin>>Y[j];
        
		for(int j=0;j<Q;j++)
		if(Y[j]<X[0]) cout<<"0"<<endl;
		else
		cout<<upper_bound(X,X+n,Y[j])-X<<endl;
		      
		
return 0;
}

