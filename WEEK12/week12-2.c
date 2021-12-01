#include <stdio.h>
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");

    for(int k=0;k<10;k++) {
 ///---------°µ¤@½ü---------

    for(int i=0;i<10-1;i++){
    if (a[i]>a[i+1]){
        int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            }
        }

    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");
    }
}

