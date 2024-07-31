#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

// deals with type of instruction such as add,subtract, var lookup, etc
typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

// Basically a Dynamic array
typedef struct {
    int count; // how many elements are acutally used
    int capacity; // number of elements in an array 
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif