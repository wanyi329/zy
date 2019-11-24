# include <stdio.h>

int main (void)

{
    int i, m, n, t, sum;

    printf ("Enter n=");
    scanf ("%d",&n);

    for ( i=1; i<=n; i++ ){
        t=i;
        sum=0;
        while ( t!=0){
            m=t%10;
            t=t/10;
            sum=sum+m*m*m;
        }

        if ( sum==i ){

            printf ("%d\n",i);

        }

    }

    return 0;
    }