#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
char c[]="0123456789ABCDEF";
string s;
void Adds(int n){
	/*if(n<10)cout<<n;
	else if(n<11)putchar('A');
	else if(n<12)putchar('B');
	else if(n<13)putchar('C');
	else if(n<14)putchar('D');
	else if(n<15)putchar('E');
	else putchar('F');*/
	//putchar(c[n]);
	s+=c[n];
}
void Output(string s){
	int l=s.length();
	for(int i=l-1;i>=0;i--){
		putchar(s[i]);
	}
}
int main(){
	int b,a;cin>>a;
	do{
		b=a%16;
		a/=16;
		Adds(b);
	}while(a>0);
	Output(s);
	return 0;
}

