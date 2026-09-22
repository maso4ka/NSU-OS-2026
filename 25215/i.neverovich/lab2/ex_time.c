#include <sys/types.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    time_t now;
    struct tm *sp;

    (void) time(&now);

    sp = gmtime(&now);

    sp->tm_hour -= 8;

    if (sp->tm_hour < 0) {
        sp->tm_hour += 24;
        sp->tm_mday--;
    }

    printf("%d/%d/%02d %d:%02d PST\n",
        sp->tm_mon + 1,
        sp->tm_mday,
        sp->tm_year,
        sp->tm_hour,
        sp->tm_min);

    exit(0);
}