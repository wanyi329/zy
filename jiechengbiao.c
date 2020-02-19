<<<<<<< HEAD
# include <stdio.h>
double fact (int n);
int main (void)

{
    int i , n;
    double sum;

    printf ("Enter n :\n");
    scanf ("%d",&n);

     
    for ( i=0; i<n; i++ ){
        sum=fact(i);
    
    printf ("%d! = %.0f\n",i,sum);
    }
 
    return 0;

}

double fact(int n)
{
    int i;
    double product;
    product=1;

    for ( i=1; i<=n; i++){
        product =product*i;
    }

    return product;
=======
# include <stdio.h>
double fact (int n);
int main (void)

{
    int i , n;
    double sum;

    printf ("Enter n :\n");
    scanf ("%d",&n);

     
    for ( i=0; i<=n; i++ ){
        sum=fact(i);
    
    printf ("%d! = %.0f\n",i,sum);
    }

    return 0;

}

double fact(int n)
{
    int i;
    double product;
    product=1;

    for ( i=1; i<=n; i++){
        product =product*i;
    }

    return product;
>>>>>>> d72e1e811effdeefadd6ccb4f05c79600153212e
}