/**
	POJ No.1852 Ants
*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
#define MAX_N 100
int L,n,x[MAX_N];
void input(){
	cin>>L>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
}
void solve(){
	int minT=0;
	for(int i=0;i<n;i++){
		minT=max(minT,min(x[i],L-x[i]));
	}
	int maxT=0;
	for(int i=0;i<n;i++){
		maxT=max(maxT,max(x[i],L-x[i]));
	}
	cout<<minT<<" "<<maxT<<endl;
	
}
int main(){
	input();
	solve();
	return 0;
}


