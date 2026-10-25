#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// A simple structure for our ring buffer
typedef struct {
    uint8_t* buffer;
    size_t head;
    size_t tail;
    size_t max_len;
} RingBuffer;

// We will implement these functions later
bool ring_buffer_init(RingBuffer* rb, uint8_t* memory, size_t length);
bool ring_buffer_push(RingBuffer* rb, uint8_t data);
bool ring_buffer_pop(RingBuffer* rb, uint8_t* data);

#endif // RING_BUFFER_H