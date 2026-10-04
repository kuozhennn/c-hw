#include <stdio.h>
#include "bitops.h"

int main()
{
    //第一题
    uint32_t result1;

    result1 = bit_set(5, 3);

    printf("result1 = 0x%08X\n", result1);

    //第二题

    uint32_t result2;

    result2 = bit_clear(5, 3);
     
    printf("result2 = 0x%08X\n", result2 );

    return 0;
}
