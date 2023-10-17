#include<stdio.h>
int main()
{
    char c;
    int cnt[26]={0};
    while(scanf("%c",&c) != EOF)
    {
        cnt[c-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(cnt[i-'a']>0)
        {
            printf("%c : %d\n",i,cnt[i-'a']);
        }
    }
    return 0;
}