///week08-.cpp step03-2
#include <stdio.h>
int main()
{///�T����
    printf("1: *\n");///1�ӡA1���P
    printf("2: **\n");///2�ӡA2���P
    printf("3: ***\n");///3�ӡA3���P
    printf("4: ****\n");///4�ӡA4���P
    printf("5: *****\n");///5�ӡA5���P
    printf("6: ******\n");///6�ӡA6���P

    int n=6;
    for(int i=1;i<=n;i++){///���إX�Ӽh�A��i��
       printf("%d: ",i);///��i��
    for(int k=1;k<=i;k++) printf("*");///��i�ӡAi���P
      printf("\n");
    }
}
