//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int array(int arr[],int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum +=arr[i];
    }
    return sum;
}
int productarray(int arr[],int k)
{
    int product = 1;
    for (int i = 0; i < k; i++)
    {
        product *= arr[i];
    }
    return product;
}int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = array(arr,5);
    int  product = productarray(arr,5);
    printf("%d %d",sum,product);
    return 0;
}
