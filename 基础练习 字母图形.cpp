#include<iostream>
#include<cstdio>
using namespace std;
char cc[27][27];
int main(){
	for(int i=0;i<26;i++){
		bool zheng=false;
		char c='A'+i;
		for(int j=0;j<26;j++){
			if(c=='A')zheng=true;
			if(zheng){
				cc[i][j]=c++;
			}else{
				cc[i][j]=c--;
			}		
		}
	}
	int m,n;cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			putchar(cc[i][j]);
		}putchar('\n');
	}
	return 0;
}

