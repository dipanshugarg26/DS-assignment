#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void Bubble(int S[],int n)
{
    int i,j,flag=0;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(S[j]>S[j+1])
            {
                swap(&S[j],&S[j+1]);
                flag=1;
            }
        }
    if(flag==0)
    break;
    }
}
int main()
{
    int S[]={4,86,3,1,16,13,2,15,12,30},n=10,i;
    Bubble(S,n);
    for(i=0;i<10;i++)
    printf("%d ",S[i]);
    printf("\n");
    return 0;
}
