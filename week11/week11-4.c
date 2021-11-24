///泡泡排序法:(1)比大小，不對就交換 a[i] vs. a[i+1] 左右
///(2) 拍照的攝影師，從左到右巡，for(int i=0;i<100-1;i++)少一個
///(3)重複做很多次 for(int k=0;k<???;k++)

#include <stdio.h>
int a[100];///不用給他值，因為你會input再補宣告
int main()
{
        ///input:100個數字
        for(int i=0;i<100;i++){///先
         scanf("%d",&a[i] );///先
        }
        for(int k=0;k<100-1;k++){///(3)重複做很多次 for(int k=0;k<???;k++)
        for(int i=0;i<100-1;i++){///(2)拍照的攝影師，從左到右巡，for(int i=0;i<100-1;i++)少一個
        if (a[i]>a[i+1]){///(1)比大小，不對就交換
        int t=a[i];
         a[i]=a[i+1];
         a[i+1]=t;
        }///a[i] vs. a[i+1] 左右
    }
}
    for(int i=0;i<100;i++){///最後，output印答案
        printf("%d ",a[i]);
        }
}
