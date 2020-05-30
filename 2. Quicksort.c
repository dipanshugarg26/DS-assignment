#include <stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }

int partition(int S[],int a,int b)
    {
        int pivot=S[a];
        int i=a,j=b;
        do
        {
            do{i++;}while(S[i]<=pivot);
            do{j--;}while(S[j]>pivot);
            if(i<j)swap(&S[i],&S[j]);
        }while(i<j);

        swap(&S[a],&S[j]);
        return j;
    }
void QuickSort(int S[],int a,int b)
{
    int j;
    if(a<b)
    {
    j=partition(S,a,b);
    QuickSort(S,a,j);
    QuickSort(S,j+1,b);
    }
}
int main()
{
    int S[]={4,86,3,1,16,13,2,15,12,30},n=10,i;
    QuickSort(S,0,n);
    for(i=0;i<10;i++)
    printf("%d ",S[i]);
    printf("\n");
    return 0;
}
