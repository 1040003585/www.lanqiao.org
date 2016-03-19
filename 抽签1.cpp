#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#define MAX_N 100
using namespace std;
int n,m,k[MAX_N]; 
void input(){
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>k[i];
	} 
}
void solve(){
	bool f=false; 
	for(int a=0;a<n;a++)
	for(int b=0;b<n;b++)
	for(int c=0;c<n;c++)
	for(int d=0;d<n;d++){
		if(m==k[a]+k[b]+k[c]+k[d]) {
			f=true; 
		} 
	} 
	if(f)puts("Yes");
	else puts("No"); 
} 
int main(){
	input();
	solve(); 
	return 0;
}


