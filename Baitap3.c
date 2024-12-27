//Xây dựng hàm có tham số là một số nguyên bất kỳ, kết quả trả về là giai thừa của đối số truyền vào.
#include<stdio.h>
int giaiThua(int n)
{
    int ans=1;
    for (int i=1; i<=n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int num;
    printf("Nhập vào số nguyên: ");scanf("%d",&num);
    printf("%d",giaiThua(num));
}