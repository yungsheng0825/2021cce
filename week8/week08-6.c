#include <stdio.h>

int main( void )
{
   int i,j;
   int n;

   printf("�п�J�j�p:");
   scanf("%d",&n);
   printf("\n");///�ɤ@�Ӹ���

   ///�U���~�O�ڭ̪��{���X
   for(int i=1; i<=n;i++){///step01:�N�[�A�Ӽh
   ///printf("%d: ",i);///�N�[�A��i��

   ///step03:�ѨM�Ů檺���D�A1��1�Ů�A2��2�Ů�
    for(int k=1; k<=i;k++) printf(" ");

   ///step02:��n���P�P�A�Ѯv��1��A��K���A���!!!
    for(int k=1; k<=n;k++) printf("*");
    printf("\n");///�N�[
   }
   return 0;
}
