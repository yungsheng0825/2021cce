#include <stdio.h>
int a[100];
int main()
{/// (1) Input
    for(int i=0;i<100;i++)
       scanf("%d",&a[i]);
	///Selection Sort ��h
    for(int i=0;i<100;i++) {///����i
    	for(int j=i+1;j<100;j++){///�k��j  �p���d�b�R�x
   			 if (a[i]>a[j]){///�p�G�ϹL��
      			  int t=a[i];///�洫
           			 a[i]=a[j];
           			 a[j]=t;
            }///�ϹL�ӴN�n�洫
        }
    }
    ///(2)Output
    for(int i=0;i<100;i++)
        printf("%d\n",a[i]);

}
