#include<stdio.h>

int main(){

	int t,n,cas=0,i,hi=0,lo=0;
	int h[100];
	
	scanf("%d",&t);

	while(t--){
		cas++;
		scanf("%d",&n);

		for(i=0;i<n;i++){
			scanf("%d",&h[i]);
		}

		hi=lo=0;

		for(i=0;i<n-1;i++){
			if(h[i]>h[i+1]){
				lo++;
			}else if(h[i]<h[i+1]){
				hi++;
			}

		}
		printf("Case %d: %d %d\n",cas,hi,lo);

	}

	return 0;
}