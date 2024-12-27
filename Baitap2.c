//Xây dựng hàm có tham số là một mảng bất kỳ, hàm có chức năng in ra tất cả các phần tử có trong mảng được truyền vào.
#include<stdio.h>
void array(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
} 
int main()
{
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");scanf("%d",&n);
    int b[n];
    for(int i=0; i<n ;i++)
    {
        printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&b[i]);
    }
    array(b,n);
}