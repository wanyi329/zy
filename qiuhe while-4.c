<<<<<<< HEAD
# include <stdio.h>
int main (void)

{
    int i ;
    double e=1 ,m=1,n=1;
  
    i=1;
    while (n>1e-5)
    { 

    m=m*i;
    n=1.0/m;
    e=e+n;
    i++;   
   
    } 
    
    printf ("e = %lf\n",e);
          
return 0;

=======
# include <stdio.h>
int main (void)

{
    int i ;
    double e=1 ,m=1,n=1;
  
    i=1;
    while (n>1e-5)
    { 

    m=m*i;
    n=1.0/m;
    e=e+n;
    i++;   
   
    } 
    
    printf ("e = %lf\n",e);
          
return 0;

>>>>>>> d72e1e811effdeefadd6ccb4f05c79600153212e
}