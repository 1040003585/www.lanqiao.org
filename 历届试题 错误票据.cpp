#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int num[10000],index;		//记录所有单个数据 
char s[10000000];			//存一行数据 
int m,n;					//m表示断号ID，n表示重号ID
void input(){
	int t;cin>>t;getchar();	//getchar接收cin多余的空格 
	while(t--){				//接收t行数据 
		gets(s);
		int l=1;			//单个数的位权 
		int one=0;			//记录单个数的大小 
		int len=strlen(s);	//一行数据的长度 
		for(int i=len-1;i>=0;i--){//每行从最后第一个数倒着处理 
			if(s[i]!=32&&i){
				one+=l*(s[i]-48);
				l*=10;
			}else if(i==0){	//存每行第一个数 
				one+=l*(s[i]-48);
				num[index++]=one;
			}else{			//当遇到空格时就存 
				l=1;
				num[index++]=one;
				one=0;
			}
		}
	}
}
void solve(){//m表示断号ID，n表示重号ID
	sort(num,num+index);
	for(int i=0;i<index-1;i++){
		if(num[i]+1==num[i+1]){
			;
		}else if(num[i]==num[i+1]){
			//cout<<num[i]<<" ";
			n=num[i];
		}else{
			//cout<<num[i]+1<<endl;
			m=num[i]+1;
		}
	}
}
void output(){
//	for(int i=0;i<index;i++){
//		cout<<num[i]<<" ";
//	}
	cout<<m<<" "<<n<<endl;
}
int main(){
	input();
	solve();
	output();
	return 0;
}

