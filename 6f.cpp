#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n],B[n];
	for(int i=0;i<n;i++) cin>>A[i];
	for(int j=0;j<n;j++) cin>>B[j];
	sort(A,A+n);
	sort(B,B+n);
	for(int i=0;i<n;i++){
		if(A[i]>B[i]) {
		cout<<"NO"<<endl;
		return 0;
	    }
	}
    cout<<"YES"<<endl;
}

