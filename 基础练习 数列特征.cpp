#include<iostream>
using namespace std;
int main(){
	int sum=0,mn,mx;
	int n;cin>>n;
	int a;cin>>a;
	sum=mx=mn=a;
	for(int i=1;i<n;i++){
		cin>>a;
		if(a>mx)mx=a;
		if(a<mn)mn=a;
		sum+=a;
	}
	cout<<mx<<endl;
	cout<<mn<<endl;
	cout<<sum<<endl;
	return 0;
}

