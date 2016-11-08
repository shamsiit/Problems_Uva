/**Problem 10633 may be entitled "Rare Easy Problem" but I do not think it is that easy. It is tricky as well as a little technical as well as tricky. So one has to be very careful with this before submitting.

We define the difference between N and M in Equation 1.

Y = N - M. [Equation 1]

Since M is formed by chopping off the last digit from N, we have Equation 2.

M = N / 10 [Equation 2]

Using Equation 2, Equation 1 can be expressed as Equation 3.

Y = N - (N / 10) [Equation 3]

Using a little algebra, Equation 3 can be transformed to get N as a function of Y.

N = (10 / 9) * Y [Equation 4]

Equation 4 then provides us a way of calculating N given the input Y.

But then we seem to have another problem. Equation 4 will only lead to one value of N given Y. That does not make sense because for example, given Y = 18, N can be 19 or 20, which gives us two possible answers for N, whereas Equation 4 only provides us one answer.

To solve this mystery, we have to analyze the pattern of some answers. Table 1 provides a listing of Y values followed by the corresponding N values.

Table 1. Listing of Y and corresponding N values.
Y, N
10, 11
11, 12
12, 13
13, 14
14, 15
15, 16
16, 17
17, 18
18, 19 20
19, 21
20, 22
21, 23
22, 24
23, 25
24, 26
25, 27
26, 28
27, 29 30
28, 31
29, 32
30, 33
31, 34
32, 35
33, 36
34, 37
35, 38
36, 39 40
37, 41
38, 42
106, 117
107, 118
108, 119, 120
109, 121
110, 122

Analyzing Table 1 reveals that for any given Y, there can be one or two values of N. Also notice that N has two values only when Y is divisible by 9. When Y is divisible by 9, N has two values N1 and N2 given by Equation 5.

[Equation 5]
N1 = (10 / 9) * Y
N2 = N1 - 1

So the algorithm is given by Equation 5. There's one more issue though. The problem requires that the solution be able to accept inputs as large as 10^18. That's a big input number.

If we used an ordinary integer to represent Y, the integer would most likely be able to accommodate up to 2 billion only assuming a 32-bit signed integer. 10^18 is the following number:

1,000,000,000,000,000,000
___6___5___4___3___2___1

2^31 is the following number:

2,147,483,648
___3___2___1

Obviously, the ordinary integer will not be able to hold 10^18.

If we use an unsigned long long int (assuming that the C language is used), the maximum integer value would be increased to 2^64 (subtract 1 from that to be more accurate):

18,446,744,073,709,551,616
____6___5___4___3___2___1

Well 2^64 seems quite certainly to be greater than 10^18 by a magnitude of about 18.

Alternatively, Equation 5 can be expressed as Equation 6 for N1 which is what I did in the sample code.

N1 = Y + (Y / 9) [Equation 6]

**/

#include<stdio.h>
int main()
{
	unsigned long long nm,n,x;
	while(scanf("%llu",&nm)==1)
	{
		if(nm==0)break;
		x=(nm*10)/9;
		if(nm%9==0)printf("%llu %llu\n",x-1,x);
		else printf("%llu\n",x);
	}
	return 0;
}