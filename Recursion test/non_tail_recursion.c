#include <stdio.h>

//!! This program is a nontail recursion since it does not return and there is still something to evaluate

void tail(int n){
    if (n == 0 )
    {
        return;
        tail(n - 1);  //!! calls for a recursive function without executing below
        printf("%d ", n);
    }
    
}


int main(){



    tail(5);
    return 0;
}