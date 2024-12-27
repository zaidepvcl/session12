//Xây dựng hàm có tham số là một mảng số nguyên bất kỳ, kết quả trả về là số lớn nhất trong mảng truyền vào.
#include<stdio.h>
int numberMaxInArray(int array[],int size)
{
    int max = 0;
    for(int i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max =array[i];
        }
    }
    return max;
}
int main()
{
    int a[8] ={8,1,5,2,7,4,9,7};
    printf("Số lớn nhất trong mảng: %d",numberMaxInArray(a,8));
}