#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Same\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A choto\n");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("B choto\n");
            break;
        }

        if(a[i]==b[i])
        {
            i++;
        }        
        else if(a[i]<b[i])
        {
            printf("A choto\n");
            break;
        }
        else
        {
            printf("B choto\n");
            break;
        }
    }
    return 0;
}