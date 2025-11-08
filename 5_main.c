//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int sequence(int a1,int an,int step)
{
    int num = (an - a1)/step + 1;
    return num*(a1 + an)/2;
}
int main()
{
    int total = sequence(1,100,1);
    printf("%d",total);
    return 0;
}
