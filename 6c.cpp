#include<iostream>
#include<algorithm>
#define nmax 100007
using namespace std;
bool cmp(int a,int b){
	return a>b;
	}
float xuly(int A[],int C,int D,int n){
	float s1=0,s2=0,mi,ma;
    mi=min(C,D);
    ma=max(C,D);
   for(int i=1;i<=C+D;i++){
   	if(i<=mi) s1+=A[i];
   	else  s2+=A[i];
   }
  
   float kq=s1/mi+s2/ma;
   return kq;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,C,D;
		cin>>N>>C>>D;
		int A[nmax];
		for(int i=1;i<=N;i++) cin>>A[i];
		sort(A+1,A+N+1,cmp);
		cout.precision(6);
		std::cout.setf( ios::fixed, ios::floatfield ); 
		cout<<xuly(A,C,D,N)<<endl;
	}
return 0;
}

