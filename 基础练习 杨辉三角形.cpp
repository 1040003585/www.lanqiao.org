#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int a[35][35];
int main(){
	for(int i=0;i<34;i++){
		a[i][0]=a[i][i]=1;
	}
	for(int i=2;i<34;i++){
		for(int j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int j;
		for(j=0;j<=i;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}

