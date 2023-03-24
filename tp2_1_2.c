#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main (){

    int i;

    double vt[N], *punt;

    punt=vt;

    srand(time(NULL));
    
    for(i = 0;i<N; i++){

        punt[i]=1+rand()%100;

        printf("%.2f ", punt[i]);
    }

    getchar ();
    return 0;
}
