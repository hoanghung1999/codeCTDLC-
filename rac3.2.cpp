
		#include<iostream>
#include<cmath>
using namespace std;
void init(int N, int a[],int b[]){
	
	for(int i=1;i<=N;i++){
			cin>>a[i];
			cin>>b[i];
	}
	}
void sapxep(int N, int a[],int b[]){
	for(int i=1;i<=N-1;i++){
		for(int j=i+1;j<=N;j++){
			if(b[i]>b[j]){
				int temp1=a[i],temp2=b[i];
				a[i]=a[j],b[i]=b[j];
				a[j]=temp1,b[j]=temp2;
			}
		}
	}
}


int socv(int N, int a[],int b[]){

     int dau=1;
     int j=1;
	for(int i=2;i<=N;i++){
		if(b[j]<a[i]){
			++dau;
			j=i;
			}
		}
	return dau;
	}

int main(){
     int T;
	cin>>T;
	 int  N;
	for(int i=0;i<T;i++){
		cin>>N;
		int a[100001],b[100001];
		init(N,a,b);
		sapxep(N,a,b);
		cout<<socv(N,a,b)<<endl;
		
	}
	
return 0;
}

