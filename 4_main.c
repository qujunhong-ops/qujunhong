//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int power(int a,int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
    result *= a;
    }
    return result;
}
int main()
{
    int num = 0;
    for (int i = 1; i <= 5; i++)
    {
        num += power(i,2);
    }
    printf("%d",num);
    return 0;
}
