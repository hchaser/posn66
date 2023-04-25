#include <stdio.h>
#include <stdlib.h>

int main() {
    int h1, h2, m1, m2, s1, s2;
    printf("Time 1\n");
    printf("    hour:");
    scanf("%d",&h1);
    printf("  minute:");
    scanf("%d",&m1);
    printf("  second:");
    scanf("%d",&s1);
    printf("Time 2\n");
    printf("    hour:");
    scanf("%d",&h2);
    printf("  minute:");
    scanf("%d",&m2);
    printf("  second:");
    scanf("%d",&s2);
    int seconds1 = h1*60*60+m1*60+s1;
    int seconds2 = h2*60*60+m2*60+s2;
    int diff = abs(seconds1-seconds2);
    printf("seconds different = %d", diff);
}
