#include<stdio.h>
#include<math.h>

#define  pi 3.141592653589793

int main(){

	double r;
	int n;

	while(scanf("%lf %d",&r,&n) == 2){

		double phi = (double) 360/n;
		double theta = (double) 90 - (phi/2);

		double theta_red = theta * pi / 180;

		double a = 2*r*cos(theta_red);
		double h = r*sin(theta_red);
		double s = (a*h)/2;



		printf("%0.3lf\n",s*n);

	}

	return 0;
}