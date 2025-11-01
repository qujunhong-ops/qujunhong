//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>
int main()
{
    int i,j,k;
    int num = 100;
    char separator;
    while (num < 1000)
    {
        i = num / 100;
        j = (num % 100)/10;
        k = num % 10;
    
    if(num == i*i*i + j*j*j + k*k*k)
    {
        printf("%c%d",separator,num);
         separator =' ';
    }
    num++;
    }
return 0;
}
