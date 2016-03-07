#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;
unsigned int Num(char c,int i){////unsigned
	unsigned int a;
	if(c=='F')a=15;
	else if(c=='E')a=14;
	else if(c=='D')a=13;
	else if(c=='C')a=12;
	else if(c=='B')a=11;
	else if(c=='A')a=10;
	else a=c-'0';
	return a=a*pow(16,i);
	//cout<<i<<" "<<a<<endl;
}s
int main(){
	string s;cin>>s;
	unsigned int ans=0,l=s.length();/////unsigned
	for(int i=l-1;i>=0;i--){
		ans+=Num(s[l-i-1],i);
	}
	cout<<ans<<endl;
	return 0;
}

