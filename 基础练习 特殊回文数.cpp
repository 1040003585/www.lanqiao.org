#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i=0;i<=9;i++)
	for(int j=0;j<=9;j++)
	for(int k=0;k<=9;k++)
	for(int i2=0;i2<=9;i2++)
	for(int j2=0;j2<=9;j2++)
	for(int k2=0;k2<=9;k2++){
		int sum=0;
		sum+=i+j+k+i2+j2+k2;
		if(sum==n){
			if(i==0){
				if(j==k2&&k==j2){
					cout<<j<<k<<i2<<j2<<k2<<endl;	
				}
			}else{
				if(i==k2&&j==j2&&k==i2){
					cout<<i<<j<<k<<i2<<j2<<k2<<endl;
				}
			}
		}
	}
	return 0;
}

