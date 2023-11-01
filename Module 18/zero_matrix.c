#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int element=row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    if(element == cnt)
    {
        printf("Zero matrix\n");
    }
    else 
    {
        printf("Not zero matrix\n");
    }
    return 0;
}