#include<stdio.h>
#include<math.h>

#define  pi 3.141592653589793

int main(){

	double x1,y1,x2,y2,x3,y3,s,a,b,c,area,r,dia,res;

	while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3) != EOF){

		a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        b=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        c=sqrt(pow((x2-x3),2)+pow((y2-y3),2));

        s = (a+b+c)/2;

        area = sqrt(s*(s-a)*(s-b)*(s-c));

        dia = (a*b*c)/(2*area);

        r = dia/2;

		res = 2*pi*r;

		printf("%0.2lf\n",res);

	}

	return 0;
}