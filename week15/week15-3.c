///week15-3.cpp step03-1 輾轉相除法
#include <stdio.h>
int main()
{
    int a,b;///a大,b中
    scanf("%d %d",&a,&b);

    int c=a%b;///c小
    printf("a大的%d b中的%d c小的%d\n",a,b,c);
    ///while(c!=0)
    while(i)
    {
        if(c==0) break;///離開迴圈
            a=b;
            b=c;
            c=a%b;
    printf("a大的%d b中的%d c小的%d\n",a,b,c);
    }
        printf("因為c是0,離開迴圈,而且答案是中間的b\n",a,b,c);
        printf("%d",b);
}


