#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        //kaj
        if(n==1999)
        {
            printf("Correct\n");
            break;
        }
        else 
        {
            printf("Wrong\n");
        }
    }
    return 0;
}