/*Xây dựng hàm kiểm tra số hoàn hảo có 1 tham số, kết quả trả về là true nếu đối số truyền vào là số hoàn hảo, là false nếu không phải.
Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên từ bàn phím và gọi hàm với từng số để kiểm tra và in ra kết quả.*/
#include<stdio.h>
int perfectNumber(int n)
{
    int sum = 0; 
    for(int i=1; i<n; i++)
    {
        if (n %i ==0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num1,num2;
    printf("Nhập số nguyên thứ nhất: ");scanf("%d",&num1);
    printf("Nhập số nguyên thứ hai: ");scanf("%d",&num2);
    printf("%d %s",num1,perfectNumber(num1)?"là số hoàn hảo\n":"Không là số hoàn hảo\n");
    printf("%d %s",num2,perfectNumber(num2)?"là số hoàn hảo\n":"Không là số hoàn hảo\n");
}