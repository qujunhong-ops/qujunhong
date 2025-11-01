//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int main()
{
    int arr[5] ={0,0,0,0,0};
    char space;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 4; j > 0; j--)
    {
        arr[j] = arr[j-1];
    }
    arr[0] = 0;
    for (int k = 0; k < 5; k++)
    {
        printf("%c%d",space,arr[k]);
        space =' ';
    }
    return 0;
}
