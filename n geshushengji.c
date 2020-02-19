# include <stdio.h>
int main (void)

{
    int n ,i;
    int t=1;

    for ( i=1 ; i<=5 ;i++ ) { 

    printf ("Enter n:\n");
    scanf ("%d",&n);
    t=t*i;
    
    printf ("t = %d\n",t); 

}
 
return 0;

}