#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0') return 0;
    int l=fun(a,i+1);
    return l+1;
}
int main()
{
    char a[20]="rahat";
    int length=fun(a,0);
    printf("%d\n",length);
    return 0;
}

