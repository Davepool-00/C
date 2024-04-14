#include <stdio.h>
#include <stdlib.h>

int main()
{
        int seconds, fh, hour, minutes, fm, sec;
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    fh = 3600;
    fm = 60;
    hour = seconds / fh;
    minutes = (seconds % fh) / fm;
    sec = seconds % fm;
    printf("%d seconds is %d hours %d minutes and %d seconds",seconds,hour,minutes,sec);

    return 0;
}
