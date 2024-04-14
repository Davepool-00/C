#include <stdio.h>
#include <stdlib.h>

//!! This program ask user how manu value being entered 
int n;

int main(){
    
    printf("Enter how many value to be entered: ");
    scanf("%d",&n);

    //int *num = (int*)calloc(n,sizeof(int)); this is calloc
    int *num = (int*)malloc(n* sizeof(int));
    

    if (num == NULL){
        printf("Error");
        exit(1);
    }

    for ( int i = 0; i < n; i++)
    {
        printf("Enter Value: ");
        scanf("%d", num + i);
    }


    for (int  i = 0; i < n; i++)
    {
        printf("%d ",*(num+i) );
    }
    
    free(num);
    
    return 0;
}