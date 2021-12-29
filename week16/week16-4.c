///week16-4.cpp step02-2 想分析字串，裡面有幾個0幾個1
#include <stdio.h>
char line[300]="10101001010101010101011010001001010100";
int main()
{
    int ans=0;
    ///for(int i=0;i<100;i++){///以前，知道長度的話
    int i=0;///課本:
    while(line[i]!='\0')
    {
            if (line[i]== '1') ans++;
        i++;
    }
        printf("有%d個1\n",ans);
}


