//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>

int main()
{
    int num;
    int i = 3;
    printf("请输入一个50以内的正整数");
    scanf("%d",&num);
    if (num <= 1)
    {
        printf("密钥不安全，请重新输入");
        return 1;
    }
    if (num == 2)
    {
        printf("密钥安全，密码设置成功");
        return 1;
    }
    while ( i < 50)
    {
        if(num % i == 0)
        {
            break;
        }
        i++;
    }
    if(i == num){
        printf("密钥安全，密码设置成功");
        return 1;
    }else{
        printf("密钥不安全，请重新输入");
        return 1;
    }
    return 0;
}
