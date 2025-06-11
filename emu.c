#include <stdio.h>

// Unsigned char?
typedef char r8_t;
typedef short r16_t;

r8_t A;
r8_t B;
r8_t C;
r8_t D;
r8_t E;
r8_t H;
r8_t L;

r16_t BC;
r16_t DE;
r16_t HL;

int main() {
    // TODO: Check for fopen error
    char bytes[256];
    FILE *binary = fopen("dmg_boot.bin", "r");

    fgets(bytes, 256, binary);
    for (int i = 0; i < 256; i++) {
        printf("%d: %x\n", i, bytes[i]);
    }

    fclose(binary);
}