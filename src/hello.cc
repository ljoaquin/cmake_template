#include <stdio.h>
#include "cal.h"

int main(int argc, char const *argv[])
{
    puts("hello");

    printf("add %d\n", add(17, 22));
    printf("times %d\n", times(17, 22));

    return 0;
}