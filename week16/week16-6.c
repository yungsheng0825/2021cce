#include <stdio.h>
#include <string.h>//(2)字串，要用課本strlen()
char line[3000];
int main()
{
	scanf("%s", line);
	int n=strlen(line);///(2)字串的長度
	int bad=0;
	for(int i=0;i<n;i++)
	{
		//a[i] vs.a[n-1-i]
		if ( line[i]!=line[n-1-i] )
		bad=1;
	}
		if (bad==0)  printf("YES");
		else printf("NO");
}
