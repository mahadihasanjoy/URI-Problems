#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,valuesq,r1,r2;
    scanf("%lf%lf%lf",&a,&b,&c);
    valuesq=(b*b)-(4*a*c);
    valuesq=sqrt(valuesq);
    if((2*a)==0)
    {
        printf("Impossivel calcular\n");
    }
    else if(valuesq>=0)
    {
            r1= ((-b)+valuesq)/(2*a);
            r2= ((-b)-valuesq)/(2*a);
            printf("R1 = %.5lf\n",r1);
            printf("R2 = %.5lf\n",r2);
    }
    else
    {
         printf("Impossivel calcular\n");
    }

return 0;
}
