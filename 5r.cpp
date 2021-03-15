#include<iostream>
#include<queue>
#include<algorithm>
 using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
	int n;
	cout<<"nhap n:";
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	
		b[i]=a[i];
		}
		
		sort(b,b+n);
		int duoi=0,tren=n-1;
		for(int i=0;i<n;i++){
			
		
			if(a[i]!=b[i]) {
			duoi=i;
			break;
			}
			}
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]) {
			tren=i;
			break;
			}
			}
		if(duoi==0 && tren==n-1) cout<<"YES"<<endl;
		else cout<<tren-duoi+1<<endl;
			}
		
	
	return 0;
}
