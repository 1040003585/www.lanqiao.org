//2016.3.7
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int a[100000],len;
int getIndex(int num){
	for(int i=0;i<len;i++){
		if(a[i]==num)return i;
	}
	
}
int main(){
	int n,m;cin>>n>>m;
	len=n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++){
		string s;cin>>s;
		int p,q;
		if(s=="DEL"){
			cin>>q;
			for(int j=getIndex(q);j<len-1;j++){
				a[j]=a[j+1];
			}
			len--;
		}
		else if(s=="ADD"){
			cin>>p>>q;
			int j,k=getIndex(p);
			for(j=len-1;j>=k;j--){
				a[j+1]=a[j];
			}
			a[j+1]=q;
			len++;
		}
	//cout<<len<<endl;
	//for(int ii=0;ii<len;ii++)cout<<a[ii]<<" ";
	
	}
	cout<<len<<endl;
	for(int i=0;i<len;i++)cout<<a[i]<<" ";
	
	return 0;
}

