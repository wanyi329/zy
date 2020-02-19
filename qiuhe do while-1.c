<<<<<<< HEAD
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
    
    while (m>1e-10);

    printf ("e = %lf\n",e);
          
return 0;

=======
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

>>>>>>> d72e1e811effdeefadd6ccb4f05c79600153212e
}