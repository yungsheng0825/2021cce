///Selection Sort  選擇排序法
///原則:舞台上，要留最小的!!!(選出最小的)
#include <stdio.h>
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");

    for(int i=0;i<10;i++) {///左手i

    for(int j=i+1;j<10;j++){///有手j(i的右邊開始巡)
    ///左手i，右手j(希望 小...大)
    if (a[i]>a[j]){///如果反過來
        int t=a[i];///交換
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");
}
