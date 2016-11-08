/**
10499 - The Land of Justice Okay, just follow this derivation: 
1. Do you know that 4 * area of circle = area of sphere (their diameter must be the same) 
2. Every cut that you do, will create 2 * 1/2 * area of circle + 1/N * area of sphere 
3. If you have N cuts, you will have: N * (2 * 1/2 * area of circle + 1/ N * area of sphere) 
4. The formula can be simplified to: N * area of circle + area of sphere 
5. Substitute area of circle == 1/4 area of sphere 
6. Our formula is now: N/4 area of sphere + area of sphere 
7. We want to know our profit: which is: area of all cuts / area of original sphere 
8. (1 + N/4) area of sphere / area of sphere == 1 + N/4, our profit is N/4. 
9. Since we want it to be displayed in percentage, profit: N/4 * 100 ==> N * 25.
**/
#include<stdio.h>
int main()
{
	long long int n;
	while(scanf("%lld",&n)==1 && n>=0)
	{
		if(n==1)
			printf("0%%\n");
		else
			printf("%lld%%\n",n*25);
	}
	return 0;
}