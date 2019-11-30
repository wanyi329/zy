# include <stdio.h>
int main (void)

{
    int i ;
    double e=1 ,m=1,n;
    
    printf ("Enter n:\n");
    scanf ("%d",&n);
    
    for ( i=1; i<=n ;i++)
    { 
     m=m/i;
     e += m;
    
   
    } 
    
    printf ("e = %lf\n",e);
          
return 0;

}
