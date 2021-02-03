#include <stdio.h>

void f1(void) {
    printf("Function f1.\n");
}

void f2(void) {
    printf("Function f2.\n");
}

void f3(void) {
    printf("Function f3.\n");
}

void callfunc(void (*fp[])(void), int i) {
    (*fp[i])();
}

int main(void) {
    f1();
    f2();
    f3();
    void (*fp[3])(void);
    fp[0] = &f1;
    fp[1] = &f2;
    fp[2] = &f3;
    (*fp[1])();
    (*fp[2])();
    (*fp[0])();
    callfunc(fp, 2);
    callfunc(fp, 1);
    callfunc(fp, 0);
    return 0;
}