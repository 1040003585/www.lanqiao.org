/*
	Name: Wu_Being
	Copyright: 
	Author: 
	Date: 20-03-16 23:21
	Description: 2016¿∂«≈±≠ ºÙ÷Ω 
*/

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int aa[3][4],res=0,d[4][2]={{0,1},{-1,0},{1,0},{0,-1}};
void dfs(int i,int j){
	if(aa[i][j]==0)return;
	else{
		aa[i][j]=0;
		for(int k=0;k<4;k++){
			int ii=i+d[k][0],jj=j+d[k][1];
			if(ii>=0&&ii<3&&jj>=0&&jj<4&&aa[ii][jj]==1){
				dfs(ii,jj);
			}
		}
	}
}
int main(){
	for(int a1=0;a1<2;a1++)
	for(int a2=0;a2<2;a2++)
	for(int a3=0;a3<2;a3++)
	for(int a4=0;a4<2;a4++)
	for(int a5=0;a5<2;a5++)
	for(int a6=0;a6<2;a6++)
	for(int a7=0;a7<2;a7++)
	for(int a8=0;a8<2;a8++)
	for(int a9=0;a9<2;a9++)
	for(int a10=0;a10<2;a10++)
	for(int a11=0;a11<2;a11++)
	for(int a12=0;a12<2;a12++){
		int ans=0;
		if(a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12==5){
			aa[0][0]=a1;aa[0][1]=a2;aa[0][2]=a3;aa[0][3]=a4;
			aa[1][0]=a5;aa[1][1]=a6;aa[1][2]=a7;aa[1][3]=a8;
			aa[2][0]=a9;aa[2][1]=a10;aa[2][2]=a11;aa[2][3]=a12;
			
			for(int i=0;i<3;i++){
				for(int j=0;j<4;j++){
					if(aa[i][j]==1){
						dfs(i,j);
						ans++;
					}
				}
			}
		}
		if(ans==1){
			res++;
			cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<endl;
			cout<<a5<<" "<<a6<<" "<<a7<<" "<<a8<<endl;
			cout<<a9<<" "<<a10<<" "<<a11<<" "<<a12<<endl<<endl;;
		}
	}
	cout<<res<<endl;
	return 0;
}

