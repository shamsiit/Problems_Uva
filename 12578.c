#include<stdio.h>
#include<math.h>

#define PI acos(-1)

int main(){

	int t;
	double r,w,ac,ar,l;

	scanf("%d",&t);

	while(t--){
		scanf("%lf",&l);
		r = l/5;
		w = (l*6)/10;
		ac = PI*r*r;
		ar = (l*w)-ac;
		printf("%.2lf %.2lf\n",ac,ar);
	}

	return 0;
}