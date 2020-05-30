#include <stdio.h>
#include<stdlib.h>

void swap(char *x,char *y)
{
    char temp=*x;
    *x=*y;
    *y=temp;
}


void Merge(char S[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    char A[100];
    while(i<=mid && j<=h)
    {

        if(S[i]<S[j])
        {
            A[k++]=S[i++];
        }
        else
        {
            A[k++]=S[j++];
        }
    }
    for(;i<=mid;i++)
        A[k++]=S[i];
    for(;j<=h;j++)
        A[k++]=S[j];

    for(i=l;i<=h;i++)
        S[i]=A[i];
}


void MergeSort(char S[],int a,int b)
{
    int mid;
    if(a<b)
    {
        mid=(a+b)/2;
        MergeSort(S,a,mid);
        MergeSort(S,mid+1,b);
        Merge(S,a,mid,b);
    }
}


int main()
{
    char S[]={"polynomial"},n=10,i=0,j=0;


    MergeSort(S,0,n-1);

    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%c ",S[i]);
    }
    return 0;
}
