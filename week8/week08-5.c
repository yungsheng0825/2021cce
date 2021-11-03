///week08-.cpp step03-2
#include <stdio.h>
int main()
{///à
    printf("1: *\n");///1加1聋琍
    printf("2: **\n");///2加2聋琍
    printf("3: ***\n");///3加3聋琍
    printf("4: ****\n");///4加4聋琍
    printf("5: *****\n");///5加5聋琍
    printf("6: ******\n");///6加6聋琍

    int n=6;
    for(int i=1;i<=n;i++){///加糷材i加
       printf("%d: ",i);///材i加
    for(int k=1;k<=i;k++) printf("*");///材i加i聋琍
      printf("\n");
    }
}
