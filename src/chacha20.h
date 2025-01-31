#ifndef __CHACHA20_H
#define __CHACHA20_H
#include <stdint.h>

#if defined(__cplusplus)
extern "C" {
#endif

void ChaCha20XOR(uint8_t key[32], uint32_t counter, uint8_t nonce[12], uint8_t* input, uint8_t* output, int inputlen);
void ChaCha8XOR(uint8_t key[32], uint32_t counter, uint8_t nonce[12], uint8_t* input, uint8_t* output, int inputlen);


#if defined(__cplusplus)
}
#endif

#endif
