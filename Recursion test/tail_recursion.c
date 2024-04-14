#include <stdio.h>

//!! This program does not use the previous memory as it does not return to something
void tail(int n){
if (n  == 0)
{
    return; //!! It just ends and does not keep the previous memory 
}
else {
    printf("%d ", n);
    return tail(n - 1);
}

}



int main(){

    tail(2);
    return 0;
}