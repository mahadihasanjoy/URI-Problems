#include<stdio.h>
int main()
{
    int t,n,i,j;
    int sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%d",&n);
        for(j=1;j<=n/2;j++)
        {
            if(n%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==n)
        {
            printf("%d eh perfeito\n",n);
        }
        else
            printf("%d nao eh perfeito\n",n);
        sum=0;

    }

return 0;
}
