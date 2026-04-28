#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t mytime = time(NULL);
    struct tm *now = localtime(&mytime);
    printf("Time: %d:%d:%d\n", now->tm_hour, now->tm_min, now->tm_sec);
    return 0;
}
