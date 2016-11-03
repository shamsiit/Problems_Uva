#include<stdio.h>

int main(){

	double hour,min,hourAngle,minAngle,angle;
	while(scanf("%lf:%lf",&hour,&min) == 2){
		if((hour == 0) && (min == 0)){
			break;
		}

		hourAngle = (hour*30)+((min/60)*30);
		minAngle = (min * 6);

		angle = hourAngle - minAngle;
		if(angle<0){
			angle = angle*(-1);
		}

		if(angle>=180){
			angle = 360 - angle;
		}

		printf("%0.3lf\n",angle);


	}

	return 0;
}