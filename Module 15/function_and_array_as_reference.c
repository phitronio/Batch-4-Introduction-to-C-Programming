#include<stdio.h>
void fun(char * ar)
{
    ar[0]='G';
}
int main()
{
    char ar[]="Hello";
    fun(ar);
    printf("%s",ar);
    return 0;
}