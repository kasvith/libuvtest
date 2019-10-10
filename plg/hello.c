#include <stdio.h>
#include "../loader/plugin.h"

void initialize() {
    mfp_register("Hello World!");
    printf("Hello was initialized\n");
}
