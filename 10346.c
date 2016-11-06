#include<stdio.h>

int main(){

	int a,b,sum;

	while(scanf("%d %d",&a,&b)==2){
		sum = 0;
		while(a>=b){
			a = a-b+1;
			sum = sum+b;
		}
		sum = sum + a;

		printf("%d\n",sum);
	}

	return 0;
}