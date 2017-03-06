#include <stdio.h>
#include "cal.h"
#include "config.h"

int main(int argc, char const *argv[])
{
    puts("hello");

    printf("add %d\n", add(17, 22));
    printf("times %d\n", times(17, 22));

    printf("config %s\n", get_created_time().c_str());

    return 0;
}