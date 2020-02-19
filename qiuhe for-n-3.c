# include <stdio.h>
int main (void)
{
        int n,i;
        double e=1,jc=1;
		printf ("Enter n=");
		scanf ("%d",&n);
		
		for (i=1;i<=n;i++){
        jc=jc*1.0/i;
        e=e+jc;

        }
		
		printf ("e=%.6lf\n",e);
        
  return 0;
}