//Xây dựng hàm tính tổng 2 số có kết quả trả về là tổng tính được.
#include<stdio.h>
int sum (int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2;
    printf("Nhập số nguyên thứ 1: ");scanf("%d",&num1);
    printf("Nhập số nguyên thứ 2: ");scanf("%d",&num2);
    printf("Tổng 2 số là: %d",sum(num1,num2));
}