#include <stdio.h>
int main()
{
    unsigned long long int n,i,a=1,b=1,male=0,total=0,t;
    while (scanf("%llu",&n)==1&&n!=-1){
        a=1;
        b=1;
        male=0;
        total=0;
        if(n==0)printf("0 1\n");
        else {
    for(i=1;i<=n;i++){
 
         male = a+b-1;
         t =a;
         a = b;
         b = b+t;
         total = a+b-1;
 
 
    }
    printf("%llu %llu\n",male,total);
        }
    }
 
    return 0;
}