///�w�w�ƧǪk:(1)��j�p�A����N�洫 a[i] vs. a[i+1] ���k
///(2) ��Ӫ���v�v�A�q����k���Afor(int i=0;i<100-1;i++)�֤@��
///(3)���ư��ܦh�� for(int k=0;k<???;k++)

#include <stdio.h>
int a[100];///���ε��L�ȡA�]���A�|input�A�ɫŧi
int main()
{
        ///input:100�ӼƦr
        for(int i=0;i<100;i++){///��
         scanf("%d",&a[i] );///��
        }
        for(int k=0;k<100-1;k++){///(3)���ư��ܦh�� for(int k=0;k<???;k++)
        for(int i=0;i<100-1;i++){///(2)��Ӫ���v�v�A�q����k���Afor(int i=0;i<100-1;i++)�֤@��
        if (a[i]>a[i+1]){///(1)��j�p�A����N�洫
        int t=a[i];
         a[i]=a[i+1];
         a[i+1]=t;
        }///a[i] vs. a[i+1] ���k
    }
}
    for(int i=0;i<100;i++){///�̫�Aoutput�L����
        printf("%d ",a[i]);
        }
}
