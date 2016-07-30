#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float r;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        r=a+b+c;
        printf("Perimetro = %.1f\n",r);
    }
    else
    {
        r=(a+b);
        r=r*c;
        r=r/2;
        printf("Area = %.1f\n",r);
    }
return 0;
}
