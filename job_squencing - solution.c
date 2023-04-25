#include <stdio.h>
#include <stdlib.h>

struct Job {
   char id;
   int deadline;
   int profit;
};

int min(int a, int b) {
    return a>b?b:a;
}

int comparison(const void *a, const void *b) {
     return (((struct Job *)a)->profit < ((struct Job *)b)->profit);
}

void print_job_scheduling(struct Job *jobs, int n) {
    qsort(jobs, n, sizeof(struct Job), comparison);

    int result[n];
    int slot[n];

    for (int i=0; i<n; i++)
        slot[i] = 0;

    for (int i=0; i<n; i++) {
       for (int j=min(n, jobs[i].deadline)-1; j>=0; j--) {
          if (slot[j]==0) {
             result[j] = i;
             slot[j] = 1;
             break;
          }
       }
    }

    for (int i=0; i<n; i++)
        if (slot[i])
            printf("[%d]",jobs[result[i]].id);
        else printf("[ ]");
}

int main(void) {
    int n;
    struct Job *jobs;

    scanf("%d",&n);
    jobs = (struct Job *)malloc(n*sizeof(struct Job));
    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }

    print_job_scheduling(jobs, n);
}







