#pragma once
static inline __attribute__((always_inline))
void __cpuid_count(uint32_t __level, int32_t __count,
                   int32_t &__eax, int32_t &__ebx, int32_t &__ecx, int32_t &__edx)
{
    __eax = __ebx = __ecx = __edx = -1;
}

