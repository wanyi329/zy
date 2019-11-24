# include <stdio.h>

int main (void)

{
    int i, m, n, t, sum;

    printf ("Enter n=");
    scanf ("%d",&n);

    if( n<=1000 ){

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
    }

    else if (n>=1000 || n<=10000){
        
    for ( i=1000; i<=n; i++ ){
        t=i;
        sum=0;
        while ( t!=0){
            m=t%10;
            t=t/10;
            sum=sum+m*m*m*m;
        }

        if ( sum==i ){

            printf ("%d\n",i);

        }

    }
    }


    return 0;
    }