/*
	0(n*log n)+O(n*n*n) 
*/ 
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#define MAX_N 100
using namespace std;
int n,m,k[MAX_N]; 
int kkk[MAX_N*MAX_N*MAX_N];// / 
 
void input(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>k[i];
	} 
}
bool binary_search(int x){
	int l=0,r=n*n*n;// / 
	while(r-l>0){
		int i=(r+l)/2;
		if(kkk[i]==x)return true;
		else if(kkk[i]<x)l=i+1;
		else r=i; 
	} 
	return false; 
} 
void solve(){

	for(int b=0;b<n;b++){ 	
		for(int c=0;c<n;c++){
			for(int d=0;d<n;d++){
				kkk[b*n*n+c*n+d]=k[b]+k[c]+k[d];// 
			} 
		}
	} 
	sort(kkk,kkk+n*n*n);// 
	 
	bool f=false; 
	for(int a=0;a<n;a++){ 
		if(binary_search(m-k[a])) {
			f=true; break; 
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


