///week11-3.cpp step02-2 �w�w�ƧǪk
#include <stdio.h>
///int a[10]={4,5,6,1,2,3,7,8,9,0};///(1)�}�C
///int a[10]={0,3,2,1,4,5,6,7,8,9};///�ֱƦn��
int a[10]={9,8,7,6,5,4,3,2,1,0};///�̮t�����p
int main()
{
    for(int i=0;i<10;i++) printf("%d",a[i]);
    printf("\n");///��{�b���}�C�L�X���[��

    for(int k=0;k<9;k++){///�@����
    ///��h: ���k���A���Ǥ���ɡA�洫
    for(int i=0;i<10-1;i++){///�j����]
    if (a[i]>a[i+1]){///(2)�ϹL�ӷQ���j�A�k�p�A�N�洫
     int t=a[i];///(3)�洫
         a[i]=a[i+1];
         a[i+1]=t;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");///��{�b���}�C�L�X���[��
}







}
