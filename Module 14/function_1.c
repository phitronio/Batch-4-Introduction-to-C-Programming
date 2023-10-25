#include<stdio.h>

// return_type name(parameter)
// {
//     code 
//     return what? 
// }
int sum(int x,int y) // x=20 y=25
{
    // code 
    int sum=x+y;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x,y));
    return 0;
}