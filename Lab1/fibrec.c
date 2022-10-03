#include<stdio.h>
void dfs(int cnt,long long a,long long b)
{
    if (cnt==90)return;
    printf("%lld",b);
    dfs(cnt+1,b,a+b);
}

int main()
{
dfs(1,0,1);
}
