//学号：202510304205
//2179272405@qq.com
//屈军宏
#include<stdio.h>

int main()
{
    int grade;

    printf("请输入学生成绩：");
    scanf("%d",&grade);

if (grade > 100 || grade < 0){
    printf("请输入正确的成绩");
}
else if(grade >= 90 )
{
    printf("A");
}
else if (grade >= 80 ){
    printf("B");
}
else if(grade >= 70 ){
    printf("C");
}
else if(grade >= 60 ){
    printf("D");
}else if(grade >= 0 ){
    printf("E");
}
return 0;
} 
