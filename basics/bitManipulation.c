#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t x = 0;
    
    // 3. biti aç
    x |= (1 << 3);
    // 5. biti aç
    x |= (1<<5);
    // 3. biti kapat

    // sonucu yazdır
    printf("%d", x);
    return 0;
}