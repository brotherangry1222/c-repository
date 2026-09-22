#include <stdio.h>

void num(int n) {
    if (n == 0) 
    {
        return;
    }
    printf("%d\n", n);
    num(n-1);
    
}
int main(void)
{
    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}