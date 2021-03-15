#include<iostream>
#include<cstring>



using namespace std;

void Sminmax(char s1[],int &min,int&max){
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]=='6'){
		min=min*10+5;	
			}
		else min=min*10+(s1[i]-'0');
		if(s1[i]=='5'){
			max=max*10+6;
			}
			else max=max*10+(s1[i]-'0');
		}
	
	}
int main(){
	int test;
	cin>>test;
	while(test--){
		int max=1000000;
		char s1[max],s2[max];
		int min1=0,min2=0,max1=0,max2=0;
		cin>>s1>>s2;
		Sminmax(s1,min1,max1);
		Sminmax(s2,min2,max2);
		cout<<min1+min2<<" "<<max1+max2<<endl;
	}
return 0;
}

