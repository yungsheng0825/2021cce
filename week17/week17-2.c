#include <stdio.h>
int main()
{

    int N=20030101;///Τ计–常╊ㄓ
    ///緇计 %10 眔计
    ///埃猭 /10 眔2003010

    while (N>0)
    {
        printf("%d => %d %d\n",N,N/10,N%10);
        N=N/10;
    }
}

