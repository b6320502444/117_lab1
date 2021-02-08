#include<stdio.h>
int main()
{
  long long n,m=0,x=0 ;
  scanf("%lld",&n) ;
  m = n%3;
  x = n%11;
  printf("%lld %lld",m,x);
    return 0;
}
