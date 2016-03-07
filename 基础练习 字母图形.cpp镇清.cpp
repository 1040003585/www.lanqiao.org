#include<stdio.h>
int main()// 
{
  //while(1)
  //{
  	int n,m;
    int i,j,k;
    //do{
    	scanf("%d%d", &n, &m);
    //}while(n<1 && m>26);
   
    for(i=0 ; i<n ; i++)
    {
    	for(k=i ; k>0; k--)
  	      printf("%c",'A'+k);
    	for(j=k ; j<m-i ; j++)
  	      printf("%c",'A'+j);
  	    printf("\n");
    }
  //}
  return 0;//¼ÇµÃÒªint main(){...return 0; }
 } 

