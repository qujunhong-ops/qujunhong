//202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>;

int main()
{
    int a,b;
    float result;
    char operator;
    
    printf("请依次输入第一个数字，第二个数字，运算符号：");
    scanf("%d %d %c",&a,&b,&operator);

    switch (operator)
    {
    case '-': 
    result = a - b;
        break;

    case '+':
    result = a + b;
    break;

    case '*':
    result = a * b;
    break;

    case '/':
    if(b==0){
        printf("除数不能为0\n");
        return 1;

    }else{
        result = (float)a / b;
    }
    break;

    default:
    printf("错误！无效运算符\n");
    return 1;
        break;
    }
    printf("%d %c %d = %.2f",a,operator,b,result);
return 0;

}
