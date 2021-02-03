# include <stdio.h>

static unsigned int counter = 0;

void increment(void) {
    counter++;
    printf("%d ", counter);
}

int retrieve(void) {
    return counter;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
    }
    printf("\n");
    printf("Current value of counter: %d\n", retrieve());
    return 0;
}