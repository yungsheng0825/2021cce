#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int sum=0,now=1;
	for(int i=1;i<=n;i++){
	//�H��1�}�l���j��
	now*=i;
	sum+=now;
	}
	printf("%d",sum);
}
