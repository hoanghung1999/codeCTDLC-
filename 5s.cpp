#include<iostream>
#include<algorithm>
using namespace std;
void dem(int a[],int N){
	     int dmin=100000000;
	for(int i=0;i<N-1;i++){
		if(a[i+1]-a[i]<dmin) dmin=a[i+1]-a[i];
		}
		int count=0;
	for(int i=0;i<N-1;i++)
	if(a[i+1]-a[i]==dmin) count++;
	cout<<dmin<<" "<<count<<endl;
	}

int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int A[N];
		for(int i=0;i<N;i++) cin>>A[i];
        sort(A,A+N);
        dem(A,N); 	  
	  		}
		
return 0;
}

