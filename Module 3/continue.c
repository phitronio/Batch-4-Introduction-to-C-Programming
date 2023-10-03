#include<stdio.h>
int main()
{
    int i,n;
    for(i=1;i<=10;i=i+1)
    {
        
        printf("%d\n",i);
        if(i==5)
        {
            continue;
        }
    }
    return 0;
}