#include <stdio.h>


int recursion(int num){

if (num == 1 )    //?? this is a base call or a terminiator in a recursion
{
    return 1;
}
else
{
    return 1 + recursion(num-1); //?? if false from above it will return and call the fundction again and with -1
}


return 1;
}




int main (){

    int num = 5;
    
    printf( "%d\n",recursion(num));


    return 0;
}