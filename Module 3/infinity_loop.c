#include <stdio.h>
int main()
{
    int i, s = 0;
    for (int i = 0; i >= 0; i += 1)
    {
        s += i;
    }
    printf("%d", s);
    return 0;
}