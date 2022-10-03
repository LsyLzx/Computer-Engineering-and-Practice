#include<stdio.h>
int main()
{
 long long a=1,b=1;
 printf("1 1");
 for(int i=3;i<=90;i++)
 {
   long long c=b+a;
   printf(" %lld",c);
   a=b;
   b=c;
 }
}
