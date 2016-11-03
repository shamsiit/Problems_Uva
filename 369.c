#include<stdio.h>

double factorial(double n){

	double r=1,i;


	if(n<=1){
		return 1;
	}else{
		
		for(i=2;i<=n;i++){
			r = r*i;
		}

		return r;
	}

}

int main(){

	double N,M,res=0;
	while(scanf("%lf %lf",&N,&M)==2){
		if(N==0&&M==0) break;
		res = factorial(N)/(factorial(N-M)*factorial(M));
		printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",N,M,res);
	}

	return 0;
}