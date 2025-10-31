//学号：202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int main()
{
    int i;
    int j;
    int arr[5] = {};
    char space ;
    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k <= 3; k++)
    {
        j += arr[k];
    }
    arr[4] = j;
    for (int num = 0; num < 5; num++)
    {
        printf("%c%d",space,arr[num]);
        space =' ';
    }
    return 0;

}
