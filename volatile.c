#include<stdio.h>
int main()
{
    volatile int i=10;
    printf("%d %d %d", ++i, ++i, ++i);
    return 0;
}
