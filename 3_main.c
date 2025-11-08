//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        int a = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int b = arr[j];
                b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
                a = 1;
            }
            
        }
        if (a = 0)
        {
            break;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            printf("%d",arr[i]);
        }
        if (i > 0)
        {
            printf(" %d",arr[i]);
        }
        
    }
    return 0;
    
}
