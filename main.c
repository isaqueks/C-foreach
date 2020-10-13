#include <stdlib.h>
#include <stdio.h>
#include "macros.h"

int arr[] = {
    5,
    10,
    15,
    20
};

int main() {

    foreach(int i in arr) {
        if (i == 15)
            BREAK;
        printf("%d\n", i);
    }

    return 0;
}