#include<stdio.h>
#include<string.h>

int main(){

	long int length,ind=0,i;
	char c[100000];

	while(gets(c)){
		length = strlen(c);
		for(i=0;i<length;i++){
			if(c[i] == '"'){
				if(ind == 0){
					printf("``");
					ind = 1;
				}else{
					printf("''");
					ind = 0;
				}
			}else{
				printf("%c",c[i]);
			}
		}
		printf("\n");
	}

	return 0;
}