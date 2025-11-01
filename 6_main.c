//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int main()
{
    int arr[5],a,j;
    char space;
    while ( j < 5)
    {
        scanf("%d",&a);
        if (a %2 == 0)
        {
            arr[j] = a;
            j++;
        }
        
    }if (j == 5)
    {
        for (int num = 0; num < 5; num++)
    {
        printf("%C%d",space,arr[num]);
        space = ' ';
    }
    
    }
    return 0;
}
