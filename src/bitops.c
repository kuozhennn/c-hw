#include "bitops.h"

// 第一题
uint32_t bit_set(uint32_t word, uint8_t pos)
{
    if (pos > 31)
    {
       return word; 
    }
    
    
    uint32_t mask = 1u << pos;
    word = word | mask;
    return word;
}

// 第二题
uint32_t bit_clear(uint32_t word, uint8_t pos)
{
    if (pos > 31)
    {
       return word; 
    }


    uint32_t mask = ~(1u << pos);
    word = word & mask;
    return word;
}
//第三题
uint32_t bit_toggle(uint32_t word, uint8_t pos)
{
    if (pos > 31)
    {
       return word; 
    }


    uint32_t mask = 1u << pos;
    word = word ^ mask;
    return word;
}
//第四题
uint32_t bit_count(uint32_t word)
{
    uint32_t count = 0;

    while (word != 0)
    {
        count = (word & 1u) + count;
        word = word >> 1;
    }

    return count;
}
//第五题
uint32_t bit_count_do_while(uint32_t word)
{
    uint32_t count = 0;
    
    do
    {
        count = (word & 1u) + count;
        word = word >> 1;

    } while (word != 0);

    return count ;
}
//第六题
uint32_t bit_mask_make(uint8_t hi, uint8_t lo)
{
    if (lo > hi || lo > 31 || hi > 31)
    {
        return 0;
    }

    if (hi == 31 && lo == 0)
    {
        return 0xFFFFFFFFu;
    }

    uint32_t width = hi - lo + 1;
    uint32_t mask = ((1u << width) - 1u) << lo;

    return mask;
}
