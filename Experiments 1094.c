#include<stdio.h>
#include<string.h>
#include<string.h>
int main()
{
    int t,i,n,total=0,rab=0,rat=0,frog=0;
    double prab=0,prat=0,pfrog=0;
    char c;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
            scanf("%d %c",&n,&c);

            total=total+n;
            if(c=='C')
            {
                rab=rab+n;
            }
            else if(c=='R')
            {
                rat=rat+n;
            }
            else if(c=='S')
            {
                frog=frog+n;
            }

    }

    prab=(rab*100);
    prab=prab/total;
    prat=(rat*100);
    prat=prat/total;
    pfrog=(frog*100);
    pfrog=pfrog/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rab);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2lf %%\n",prab);
    printf("Percentual de ratos: %.2lf %%\n",prat);
    printf("Percentual de sapos: %.2lf %%\n",pfrog);
return 0;
}
