# include<stdio.h>
int main(void)
{
    int a[10]={4,5,7,2,1,0,3,7,96,10}; 
    int i, j, temp;

    for (i=0;i<10-1;i++){
        for (j=0;j<10-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for (i=0;i<10;i++){
        printf ("%5d",a[i]);
    }
    printf ("\n");

    return 0;
}