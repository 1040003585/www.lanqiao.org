#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int num[10000],index;		//��¼���е������� 
char s[10000000];			//��һ������ 
int m,n;					//m��ʾ�Ϻ�ID��n��ʾ�غ�ID
void input(){
	int t;cin>>t;getchar();	//getchar����cin����Ŀո� 
	while(t--){				//����t������ 
		gets(s);
		int l=1;			//��������λȨ 
		int one=0;			//��¼�������Ĵ�С 
		int len=strlen(s);	//һ�����ݵĳ��� 
		for(int i=len-1;i>=0;i--){//ÿ�д�����һ�������Ŵ��� 
			if(s[i]!=32&&i){
				one+=l*(s[i]-48);
				l*=10;
			}else if(i==0){	//��ÿ�е�һ���� 
				one+=l*(s[i]-48);
				num[index++]=one;
			}else{			//�������ո�ʱ�ʹ� 
				l=1;
				num[index++]=one;
				one=0;
			}
		}
	}
}
void solve(){//m��ʾ�Ϻ�ID��n��ʾ�غ�ID
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

