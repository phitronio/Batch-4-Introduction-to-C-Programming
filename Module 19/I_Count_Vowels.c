#include<stdio.h>

int fun(char s[],int i)
{
    // base case
    if(s[i]=='\0') 
    {
        return 0;
    }
    int ans=fun(s,i+1);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+32;
    }
    if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i')
    {
        return ans+1;
    }
    else 
    {
        return ans;
    }
}
int main()
{
    char s[205];
    fgets(s,205,stdin);
    int cnt=fun(s,0);
    printf("%d\n",cnt);
    return 0;
}