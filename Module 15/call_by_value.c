#include<stdio.h>
void fun(int x)
{
    x=200;
}
int main()
{
    int x=10;
    // printf("main x er address - %p\n",&x);
    fun(x);
    printf("main er x er value - %d\n",x);
    return 0;
}