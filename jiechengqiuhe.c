# include <stdio.h>
int main (void)

{
    int i, n;
    double sum;
    double fact(int n);
    printf ("Enter n:\n");
    scanf ("%d",&n);
    sum=0;

    for ( i=0; i<=n; i++){
        sum=sum+fact(i);
    }

    printf ("sum =%.0f\n",sum);

    return 0;
}

double fact(int n)

{
    int i;
    double product;
    product=1;

    for ( i=1; i<=n; i++){
    product=product*i;
    }
    
    return product;
}