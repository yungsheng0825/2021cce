///Selection Sort  ��ܱƧǪk
///��h:�R�x�W�A�n�d�̤p��!!!(��X�̤p��)
#include <stdio.h>
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");

    for(int i=0;i<10;i++) {///����i

    for(int j=i+1;j<10;j++){///����j(i���k��}�l��)
    ///����i�A�k��j(�Ʊ� �p...�j)
    if (a[i]>a[j]){///�p�G�ϹL��
        int t=a[i];///�洫
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");
}
