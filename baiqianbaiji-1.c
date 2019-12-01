# include <stdio.h>
int main (void)

{
    int a, b, c;
    for (a=0;a<=20;a++)
    for (b=0;b<=33;b++)
    for (c=3;c<100;c++)
    
    if (c%3==0 && 5*a+3*b+c/3.0==100 && a+b+c==100)

    printf ("公鸡= %d只，母鸡= %d只，小鸡= %d只；\n",a,b,c);

    return 0;
}