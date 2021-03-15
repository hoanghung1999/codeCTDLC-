#include<iostream>
#include<queue>
using namespace std;
void xoaytrai(int a[]){
	int temp1=a[1],temp2=a[2],temp6=a[6],temp9=a[9],temp8=a[8],temp4=a[4];
	a[1]=temp4;
	a[2]=temp1;a[6]=temp2; a[9]=temp6;a[8]=temp9;a[4]=temp8;
	}
void xoayphai(int a[]){
	int temp2=a[2],temp3=a[3],temp7=a[7],temp10=a[10],temp9=a[9],temp5=a[5];
	a[2]=temp5;
	a[3]=temp2;a[7]=temp3; a[10]=temp7;a[9]=temp10;a[5]=temp9;
	}
struct data{
	int a[11];
};
int check(int a[],int b[]){
	for(int i=1;i<=10;i++){
	
	if(a[i]!=b[i]) return 0;
}
	return 1;
	}
void hienthi(int a[]){
 
		for(int  i=1;i<=10;i++){
		if(i==4||i==8) cout<<endl;
		cout<<a[i];
	}
}
int main(){
      data x,y;
      for(int i=1;i<=10;i++) {
	  cin>>x.a[i];
      y.a[i]=x.a[i];
	  }

	  pair<data,int> v=make_pair(x,0);
	  int ok=0;
	  queue <pair<data,int> > q;
	  q.push(v);
	  while(!q.empty() && ok==0){
	  	pair <data,int> d=q.front();
	  	q.pop();
		  for(int i=0;i<=1;i++){
		  pair<data,int > temp=d;
		  	if(i==0){
		  		xoaytrai(temp.first.a);
		  	
				temp.second=d.second+1;
		  		q.push(temp);
		  		
		  	if(check(temp.first.a,y.a)==1) ok=temp.second;
			  }
		  if(i==1){
		  		xoayphai(temp.first.a);
		  		temp.second=d.second+1;
		  		q.push(temp);
		  	if(check(temp.first.a,y.a)) ok=temp.second;
			  }
		  }	  
		  }
		  cout<<ok<<endl;
return 0;
}

