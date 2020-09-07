#include <stdio.h>

int facto(int n){
    if(n>1)
        return facto(n-1)*n;
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",facto(n));

    return 0;
}
