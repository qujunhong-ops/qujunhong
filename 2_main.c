//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>

int main()
{
    int i,j,k;
    int num;
    char[] separator;
    for ( num = 100; num < 1000; num += 1)
    {
        i = num / 100;
        j = (num % 100)/10;
        k = num % 10;
    
    if(num == i*i*i + j*j*j + k*k*k)
    {
        printf("%s%d",separator,num);
         separator =" ";
    }
    }
return 0;
}
