#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
struct IT{
	string ten1,ten2;
	int tuoi,tuoi1,tuoi2;
};
struct IT2{
	string ten;
	int tuoi;
};
void TRY(IT A[],int n,string s,int temp, int chuaxet[]){
	for(int i=1;i<=n;i++){
		if(A[i].ten1==s && chuaxet[i]) {
		A[i].tuoi2=temp-A[i].tuoi;
		chuaxet[i]=0;
		TRY(A,n,A[i].ten2,A[i].tuoi2,chuaxet);
	    }
	}
}
bool cmp(IT2 A,IT2 B){
	if(A.tuoi==B.tuoi){
		return A.ten<B.ten;
	}
	return A.tuoi>B.tuoi;
}
int main(){
	int T;
	cin>>T;
	int count=0;
	while(T--){
		int X;
		cin>>X;
		IT A[X+1];
	
		int temp;
		for(int i=1;i<=X;i++){
			cin>>A[i].ten1>>A[i].ten2>>A[i].tuoi;
			A[i].tuoi1=A[i].tuoi2=0;
			if(A[i].ten1=="Ted") A[i].tuoi1=100;
		}
		int chuaxet[X+1];
		for(int i=1;i<=X;i++) chuaxet[i]=1; 
		TRY(A,X,"Ted",100,chuaxet);
		IT2 B[X+1];
		for(int i=1;i<=X;i++){
			B[i].ten=A[i].ten2;
			B[i].tuoi=A[i].tuoi2;
		}
		sort(B+1,B+X+1,cmp);
		cout<<"DATASET "<<++count<<endl;
		for(int i=1;i<=X;i++)
		cout<<B[i].ten<<" "<<B[i].tuoi<<endl;
	}
return 0;
}

