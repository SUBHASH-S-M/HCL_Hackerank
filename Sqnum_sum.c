
//sum of root of perfect squre numebrs in given array 
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int arr[]={5,4,10,9,8,4,49};
    int n=sizeof(arr)/sizeof(arr[0]);
    int iVar;
    float fVar;
    int sum1=0;
    for(int i=0;i<n;i++)
    {
    fVar=sqrt((double)arr[i]);
    iVar=fVar;
    
    if(iVar==fVar)
        sum1+=sqrt((double)arr[i]);   
      
    }
     printf("%d",sum1);
}