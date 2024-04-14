#include <stdio.h>

int main() {
 int arr[11]={0,1,2,3,4,5,6,7,8,9,10};
 int i,size;
 size=sizeof(arr)/sizeof(arr[0]);
 for(i=1;i<size;i++)
 {
     arr[i]=i;
     if(arr[i]%2!=0)
     printf("%d",arr[i]);
 }
 for(i=0;i<size;i++)
 {
     arr[i]=i;
     if(arr[i]==0)
     printf("%d",arr[i]);
 }
 for(i=1;i<size;i++)
 {
     arr[i]=i;
     if(arr[i]%2==0)
     printf("%d",arr[i]);
 }
 

    return 0;
}