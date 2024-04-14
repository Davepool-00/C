#include <stdio.h>


//?? Program that adds +1 if it is odd and subtracts -1 if it is even

int n = 1; //?? Start number


void odd(){
    if (n <= 5)
    {
        printf("%d", n+1);
        n++; //!! Increement for int n
        even();    //!! after the process above is done it is passed to the other void
    }
    return;
  
}

void even(){
    if (n <= 10)
    {
        printf("%d", n-1);
        n++; //!! Increement for int n
        odd(); //!! after the process above is done it is passed to the other void
    }
    return;
    
}




   int main(){


    odd();
    return 0;
}   