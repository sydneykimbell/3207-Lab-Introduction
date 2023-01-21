#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

char randchar() {
    int n = rand() % 26;
    char c = (char)(n+65);
    return c;
}