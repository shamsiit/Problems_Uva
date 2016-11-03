#include<stdio.h>
#include<string.h>

int main(){

    long mod4,mod100,mod400,mod15,mod55,i,flag,leap,a,prin=0;
    char A[1000000];
    int len = 0;

	while(gets(A)){

		if(prin>0){
			printf("\n");
		}

		prin++;

        len = strlen(A);
        
        mod4=mod100=mod400=mod15=mod55=i=flag=leap=0;

        for(i=0;i<len;i++){

		   mod4 = ((mod4*10)+(A[i]-'0'))%4;
		   mod100 = ((mod100*10)+(A[i]-'0'))%100;
		   mod400 = ((mod400*10)+(A[i]-'0'))%400;
		   mod15 = ((mod15*10)+(A[i]-'0'))%15;
		   mod55 = ((mod55*10)+(A[i]-'0'))%55;
        }

		if ((mod4==0 && mod100!=0) || mod400==0){
            printf("This is leap year.\n");
            leap = 1;
            flag = 1;
        }
 
        if (mod15==0){
            printf("This is huluculu festival year.\n");
            flag = 1;
        }
 
        if (leap==1 && mod55==0){
            printf("This is bulukulu festival year.\n");
        }
 
        if (flag==0)
            printf("This is an ordinary year.\n");

	}


	return 0;
}