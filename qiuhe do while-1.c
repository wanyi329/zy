# include <stdio.h>
int main (void)

{
    int i ;
    double e=1 ,t=1,m;
  
    i=1;
    do { 

    t=t*i;
    m=1.0/t;
    e=e+m;
    i++;   
   
    } 
    
    while (m>1e-5);

    printf ("e = %lf\n",e);
          
return 0;

}