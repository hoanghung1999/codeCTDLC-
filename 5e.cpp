#include<bits/stdc++.h>
using namespace std;
void quaytrai(int a[]){
	int temp1=a[1],temp2=a[2],temp4=a[4],temp5=a[5];
	a[1]=temp4;
	a[2]=temp1;
	a[4]=temp5;
	a[5]=temp2;
}
void quayphai(int a[]){
	int temp2=a[2],temp3=a[3],temp5=a[5],temp6=a[6];
	a[2]=temp5;
	a[3]=temp2;
	a[5]=temp6;
	a[6]=temp3;
}

struct data{
	int k[7];
};

void hienthi(int a[]){
	for(int i=1;i<=6;i++)
	cout<<a[i]<<" ";
}
int sosanh(data x,data y){
	for(int i=1;i<=6;i++){
		if(x.k[i]!=y.k[i]) return 0;
	}
	return 1;
}
int main(){
   data x,y;
   for(int i=1;i<7;i++) cin>>x.k[i];
   for(int i=1;i<7;i++) cin>>y.k[i];
   pair<data,int> v=make_pair(x,0);
   queue< pair<data,int > > q;
   q.push(v);
  
   int ok=0;
   while(!q.empty() && ok==0){
   	pair<data,int> temp1=q.front();
   	q.pop();
   	for(int i=1;i<=2;i++){
   	   pair<data,int> temp2=temp1;
   		if(i==1){
   			quaytrai(temp2.first.k);
   			temp2.second=temp1.second+1;
		   if(sosanh(temp2.first,y)) ok=temp2.second;
   			q.push(temp2);
		   }
		if(i==2){
			quayphai(temp2.first.k);
   			temp2.second=temp1.second+1;
   			if(sosanh(temp2.first,y)) ok=temp2.second;
   			q.push(temp2);
		}
	   }
   }
   cout<<ok<<endl;
return 0;
}

