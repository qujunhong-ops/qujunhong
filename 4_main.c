//学号：202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>;
int main()
{
    int a;
    int b;
    int c;

    printf("请输入三角形的边长：");
    scanf("%d %d %d",&a,&b,&c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("可以组成三角形");
    }else{
        printf("不能组成三角形");

    }
    return 0;
