#include<stdio.h>
void fun(double ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%0.2lf ",ar[i]);
    }
}
int main()
{
    double ar[5]={10.5,20.2,30.1,40.6,50.0};
    fun(ar,5);
    return 0;
}