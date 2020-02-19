# include <stdio.h>
int main (void)
{
    char ch;
    short a;
    int b;
    long c;
    float d;
    double e;
    ch='a';
    a=1;
    b=2;
    c=3;
    d=1.5;
    e=1.5;
    printf("sizeof is %d\n",sizeof(char));
    printf("sizeof is %d\n",sizeof(short));
    printf("sizeof is %d\n",sizeof(int));
    printf("sizeof is %d\n",sizeof(long));
    printf("sizeof is %d\n",sizeof(float));
    printf("sizeof is %d\n",sizeof(double));
    return 0;
}