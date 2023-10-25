#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
// int sum()
// {
//     printf("Bisshash koro input nicchi\n");
//     return 0;
// }
int main()
{
    // printf("Ami kintu call kortesi\n");
    int s=sum(100);
    // printf("Dekhi ki korla tumi!\n");
    printf("%d",s);
    return 0;
}