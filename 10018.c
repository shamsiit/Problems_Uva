#include<stdio.h>

int main(){

	long int count,add,rev,num,t,i,j,d,k;

	scanf("%ld",&t);

	while(t--){

		scanf("%ld",&num);

		rev = 0;
		count = 0;

		for(i=num;i!=0;i=i/10){
			d = i%10;
			rev = rev*10 + d;
		}

		if(num != rev){
			for(k=0;k<1000;k++){
				add = num+rev;
				count++;
				rev = 0;
				num = add;
				for(j=num;j!=0;j=j/10){
					d = j% 10;
					rev = rev*10 + d;
				}
				if(num == rev) break;
			}
		}

		printf("%ld %ld\n",count,num);
	}

	return 0;
}