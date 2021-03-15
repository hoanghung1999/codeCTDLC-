#include<iostream>
#include<set>
using namespace std;
int kiemtra(string s,multiset<char> st1, multiset<char> st2){
	if(st1.size()!=st2.size()) return 0;
    for(int i=0;i<s.length();i++)
    if(st1.count(s[i])!=st2.count(s[i])) return 0;
    return 1;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	multiset<char> st1(s1,s1+s1.length()),st2(s2,s2+s2.length());
    cout<<kiemtra(s1,st1,st2);	
return 0;
}

