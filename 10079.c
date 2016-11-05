#include<stdio.h>

int main(){

	long long n;

	while(scanf("%lld",&n)==1){
		if(n<0){
			break;
		}
        
        printf("%lld\n",(1+((n*(n+1))/2)));

	}

	return 0;
}