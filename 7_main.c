//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int reverse(int arr[],int l)
{
    for (int i = 0; i < l/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[l - 1 - i];
        arr[l - 1 - i] = temp;
    }
    
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,5);
    for (int i = 0; i < 5; i++)
    {if(i == 0){
        printf("%d",arr[i]);
    }
    if (i > 0)
    {
        printf(" %d",arr[i]);
    }
    }
    return 0;
}
