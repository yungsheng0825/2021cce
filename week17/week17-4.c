#include <stdio.h>
int f(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
		return sum;
}
int main()
{
	int n;
	while(scanf("%d",&n))
	{
		if (n==0) break;
		int ans=f(f(f(n)));
		printf("%d\n",ans);
	}
}
