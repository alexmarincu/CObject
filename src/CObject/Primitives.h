#ifndef PRIMITIVES_H
#define PRIMITIVES_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define null NULL
typedef bool boolean;
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;
#define Array_size(array) (sizeof(array) / sizeof(*(array)))

#endif // PRIMITIVES_H
