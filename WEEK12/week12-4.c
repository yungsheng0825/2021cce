#include <stdio.h>
int a[100];
int main()
{/// (1) Input
    for(int i=0;i<100;i++)
       scanf("%d",&a[i]);
	///Selection Sort 原則
    for(int i=0;i<100;i++) {///左手i
    	for(int j=i+1;j<100;j++){///右手j  小的留在舞台
   			 if (a[i]>a[j]){///如果反過來
      			  int t=a[i];///交換
           			 a[i]=a[j];
           			 a[j]=t;
            }///反過來就要交換
        }
    }
    ///(2)Output
    for(int i=0;i<100;i++)
        printf("%d\n",a[i]);

}
