#include<stdio.h>

int main(){

	int n,k,p,t,cas=0,res;
	
	scanf("%d",&t);

	while(t--){
		cas++;
		scanf("%d %d %d",&n,&k,&p);
		res = k+p;

		while(res>n){
			res = res - n;
		}

		printf("Case %d: %d\n",cas,res);

	}

	return 0;
}