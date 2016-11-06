#include<stdio.h>
#include<math.h>

int isPrime (long int x)
{ 
  int i,k;
  k = sqrt(x+1);
  for ( i = 2; i <= k; i++)
  {
    if (x % i == 0)
      return 0;
  }
  return 1;
}
int reverse(unsigned int n)
{
  unsigned int r = 0;
  do{
    r = r * 10 + n % 10;
  }while ((n /= 10) > 0);
  
  return r;
}

int main()
{
 long int n;
 while(scanf("%ld",&n)==1 )
 {
  if (isPrime(n)!=1)
   printf ("%ld is not prime.\n", n);
 else
 {
  int n1=reverse(n);
  if ( isPrime(n1)==1 && n1!=n )
    printf ("%ld is emirp.\n",n);

  else
    printf ("%ld is prime.\n",n);
}
}
return 0;
}
