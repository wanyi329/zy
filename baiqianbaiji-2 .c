<<<<<<< HEAD
# include <stdio.h>
int main (void)
 
{
    int a ,b ,c ,sum;

    for ( a=0;a<20;a++ )
    for ( b=0;b<33;b++ )
    {

    c=100-a-b;
    sum=5*a+3*b+c/3.0;

    if( sum==100 && c%3==0 )
        {
        printf( "公鸡= %d只, 母鸡= %d只, 小鸡= %d只;\n",a,b,c );
        }
    }
return 0;
=======
# include <stdio.h>
int main (void)
 
{
    int a ,b ,c ,sum;

    for ( a=0;a<20;a++ )
    for ( b=0;b<33;b++ )
    {

    c=100-a-b;
    sum=5*a+3*b+c/3.0;

    if( sum==100 && c%3==0 )
        {
        printf( "公鸡= %d只, 母鸡= %d只, 小鸡= %d只;\n",a,b,c );
        }
    }
return 0;
>>>>>>> d72e1e811effdeefadd6ccb4f05c79600153212e
}