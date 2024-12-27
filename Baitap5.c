/*Xây dựng hàm kiểm tra số nguyên tố có 1 tham số, kết quả trả về là true nếu đối số truyền vào là số nguyên tố, là false nếu không phải.
Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên từ bàn phím và gọi hàm với từng số để kiểm tra và in ra kết quả.*/
#include<stdio.h>
int ngTo(int n)
{
    int count=0;
    if(n<2)
    {
        return 0;
    }
    for(int i=2; i*i <= n; i++)
    {
        if(n %i ==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num1,num2;
    printf("Nhập số nguyên thứ nhất: ");scanf("%d",&num1);
    printf("Nhập số nguyên thứ hai: ");scanf("%d",&num2);
    printf("%d %s",num1,ngTo(num1)?"là số nguyên tố\n":"Không là số nguyên tố\n");
    printf("%d %s",num2,ngTo(num2)?"là số nguyên tố\n":"Không là số nguyên tố\n");
}