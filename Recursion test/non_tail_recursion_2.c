#include <stdio.h>
//!! This program counts how many you can divide the digit without the decimal 
//?? use float n and n <= 1 to add the decimal
int tail (int n){
        if ( n == 1)
        return 0;
        else {
            return 1 + tail (n / 2);
            
        }
    }
    
    
int main() {
    
    printf("%d",tail(100));
    

    return 0;
}