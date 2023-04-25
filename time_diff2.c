
#include <stdio.h>
#include <stdlib.h>

void read_time(int *h, int *m, int *s) {
    printf("    hour:");
    scanf("%d",h);
    printf("  minute:");
    scanf("%d",m);
    printf("  second:");
    scanf("%d",s);
}

int main() {
    int h1, h2, m1, m2, s1, s2;
    printf("Time 1\n");
    read_time(&h1, &m1, &s1);
    printf("Time 2\n");
    read_time(&h2, &m2, &s2);
    int seconds1 = h1*60*60+m1*60+s1;
    int seconds2 = h2*60*60+m2*60+s2;
    int diff = abs(seconds1-seconds2);
    printf("seconds different = %d", diff);
}
