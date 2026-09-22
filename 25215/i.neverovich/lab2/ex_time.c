#include <stdio.h>
#include <time.h>

#define PST_OFFSET (8 * 3600)

int main(void)
{
    time_t now;
    struct tm *sp;

    time(&now);

    now -= PST_OFFSET;
    sp = gmtime(&now);

    printf("%d/%d/%d %d:%02d PST\n",
           sp->tm_mon + 1,
           sp->tm_mday,
           sp->tm_year + 1900,
           sp->tm_hour,
           sp->tm_min);

    return 0;
}