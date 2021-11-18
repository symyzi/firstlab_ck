#include <stdio.h>
#include <math.h>

typedef struct circle {
    int rad;
    int x;
    int y;
};

typedef struct lock {
    unsigned NumLock: 1;
    unsigned CapsLock: 1;
    unsigned ScrollLock: 1;
};

union keyboard {
    struct lock status;
    int number;
};

enum {
    book = 1, journal = 2, newspaper = 3
};

double area(int r){
    double S;
    S = M_PI * r * r;
    return S;
}


int main() {
    int var = newspaper;
    printf("element %d\n", var);

    struct circle varCir;
    varCir.rad = 5;
    //double S;
    //S = M_PI * varCir.rad * varCir.rad;
    double ar= area(varCir.rad);
    printf("area of the circle = %lf\n",ar );

    union keyboard click;
    int vol;
    scanf("%d", &vol);
    click.number = vol;
    printf("Numlock %d\n", click.status.NumLock);
    printf("CapsLock %d\n", click.status.CapsLock);
    printf("ScrollLock %d", click.status.ScrollLock);
    return 0;
}
