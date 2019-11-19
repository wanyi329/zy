# include <stdio.h>
int main (void)

{
    int i ;
    double e=1 ,m=1;
  
    i=1;
    while (m>1e-5)
    { 
    m=m/i;
    e +=m;
    i++;
    } 
    
    printf ("e = %lf\n",e);
          
return 0;

}