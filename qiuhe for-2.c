# include <stdio.h>
int main (void)

{
    int i ;
    double e=1 , m=1;
  
   for ( i=1; m>=1e-5 ;i++ )
    { 
    
  
    m=m*1.0/i;
    e=e+m;
      
   
    } 
    
    printf ("e = %lf\n",e);
          
return 0;

}