#ifndef BITOPS_H
#define BITOPS_H

#include <stdint.h>

uint32_t bit_set(uint32_t word, uint8_t pos);
uint32_t bit_claer(uint32_t word, uint8_t pos);
uint32_t bit_toggle(uint32_t word, uint8_t pos);
uint32_t bit_get(uint32_t word, uint8_t pos);
uint32_t bit_count(uint32_t word);
uint32_t bit_count_do_while(uint32_t word);
uint32_t bit_mask_make(uint8_t hi, uint8_t lo);




endif