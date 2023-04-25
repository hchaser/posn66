
#include <stdio.h>
#include <stdlib.h>

typedef struct Time {
    int h, m, s;
} time;

void read_time(time *t) {
    printf("    hour:");
    scanf("%d",&t->h);
    printf("  minute:");
    scanf("%d",&t->m);
    printf("  second:");
    scanf("%d",&t->s);
}

int time_diff(const time *t1, const time *t2) {
    int seconds1 = t1->h*60*60+t1->m*60+t1->s;
    int seconds2 = t2->h*60*60+t2->m*60+t2->s;
    return abs(seconds1-seconds2);
}

int main() {
    time t1, t2;
    printf("Time 1\n");
    read_time(&t1);
    printf("Time 2\n");
    read_time(&t2);

    int diff = time_diff(&t1, &t2);
    printf("seconds different = %d", diff);
}
