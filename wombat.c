
typedef struct _Wombat {
    float f;
    int L;
    char name[20];
} Wombat;

int main() {
    Wombat ralph, wombats[10];
    ralph.f = 13.7;
    strcpy(ralph.name, "The Doctor");
    for(int i=1; i<=10; i++) {
        wombats[i-1].f = 0.1*i;
        wombats[i-1].L = i;
        sprintf(wombats[i-1].name, "Monroe %d", i);
    }
    for(int i=1; i<=10; i++) {
        printf("%s: %d, %0.1f\n", wombats[i-1].name
                            , wombats[i-1].L
                            , wombats[i-1].f);
    }
    return 0;
}
