#include<stdio.h>

int main(){

	long int a,b;
    int count,c;

while(scanf("%ld %ld",&a,&b)==2){
	if(a==0 && b==0){
		break;
	}

	c = count = 0;

	while(a!=0 || b!=0){
		c = (a%10 + b%10 +c)/10;
		count = count + c;
		a=a/10;
		b = b/10;

	}

	if(count == 0){
		printf("No carry operation.\n");
	}else if(count == 1){
        printf("1 carry operation.\n");
	}else if(count > 1){
		printf("%d carry operations.\n",count);
	}
}

	return 0;
}