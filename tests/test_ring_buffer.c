#include <stdio.h>
#include <assert.h>
#include "ring_buffer.h"

int main(){
    RingBuffer rb;
    uint8_t memory[10];

    bool success = ring_buffer_init(&rb, memory, 10);

    // Assert that the ring buffer was initialized successfully. If condition is false, the program will terminate and print an error message.
    assert(success == true);

    printf("Ring buffer initialized successfully.\n");
    return 0;
}