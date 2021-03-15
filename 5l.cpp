#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for (int i=0; i<=n-2; i++) 
    { 
        int imin = i;
        for (int j=i+1; j<=n-1; j++) 
            if(a[j]<a[imin]) imin=j;
            int temp=a[i];
            a[i]=a[imin];
            a[imin]=temp;
                         

			cout<<"Buoc "<<i+1<<" :";
			for(int k=0;k<n;k++) cout<<a[k]<<" ";
			cout<<endl;
		}
return 0;
}

