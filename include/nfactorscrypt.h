#ifndef SCRYPT_H
#define SCRYPT_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

void scrypt_N_1_1_256(const char* input, char* output);
void scrypt_N_1_1_256_sp(const char* input, char* output, char* scratchpad, uint32_t N);

#ifdef __cplusplus
}
#endif

#endif
