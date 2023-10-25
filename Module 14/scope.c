#include<stdio.h>
// global
int x=500;
void fun(void)
{
    // printf("fun er x er address - %p\n",&x);
}
int main()
{
    // printf("Main er x er address - %p\n",&x);

    // fun();

    int y=100;
    for(int i=0;i<5;i++)
    {
        int z=100;
    }
    // printf("%d",z);
    return 0;
}