# include <stdio.h>
int main (void)

{
    int i ;
    double e=1 ,m=1,n;
  
    i=1;
    while (n>1e-5)
    { 

    m=m*i;
    n=1.0/m;
    e=e+m;
    i++;   
   
    } 
    
    printf ("e = %lf\n",e);
          
return 0;

}