#include <stdio.h>
int main()
{

    int N=20030101;///���ӼƦr�A�C�@�쳣��X��
    ///�l�� %10 �o��Ӧ��
    ///���k /10 �o��2003010
    printf("%d =>%d %d\n",N, N/10,N%10);

    N=N/10;///�ܤp
    printf("%d =>%d %d\n",N, N/10,N%10);

    N=N/10;///�ܤp
    printf("%d =>%d %d\n",N, N/10,N%10);

    N=N/10;///�ܤp
    printf("%d =>%d %d\n",N, N/10,N%10);

    N=N/10;///�ܤp
    printf("%d =>%d %d\n",N, N/10,N%10);
}
