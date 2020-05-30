#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void Insertion(int S[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=S[i];
        while(j>-1 && S[j]>x)
        {
            S[j+1]=S[j];
            j--;
        }
        S[j+1]=x;
    }
}
int main()
{
    int S[]={4,86,3,1,16,13,2,15,12,30},n=10,i;
    Insertion(S,n);
    for(i=0;i<10;i++)
    printf("%d ",S[i]);
    printf("\n");
    return 0;
}
