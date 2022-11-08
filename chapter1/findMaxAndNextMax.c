#include<stdio.h>
//查找一个数组里面的最大值和次最大值
int max,nmax;
int main(){
    int n=8;
    int array []={1,2,3,556,172,6,123,98};
    Max_NextMax(array,n);
    

}
void Max_NextMax(int A[],int n)
{
    if (A[0]>=A[1])
    {
        max=A[0];
        nmax=A[1];
    }else{
        max=A[1];
        nmax=A[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (A[i]>=max)
        {
            nmax=max;
            max=A[i];
        }else if (A[i]>nmax)
        {
            nmax=A[i];
        }
        
        
        
    }
    printf("%d,\n,%d",max,nmax);
    
    
    
}