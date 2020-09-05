#include <stdio.h>

int main()
{
    int n,i,j,tmp;
    int num[1001]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                tmp = num[i];
                num[i] =num[j];
                num[j] = tmp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }


    return 0;
}
