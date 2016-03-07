#include<iostream>
using namespace std;
int a[1001],n; 
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int j,aa;cin>>aa;
	for(j=0;j<n;j++){
		if(aa==a[j]){
			cout<<j+1<<endl;
			break;
		}
	}
	if(j==n)cout<<-1<<endl;
	return 0;
}

