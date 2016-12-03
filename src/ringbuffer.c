/*
 * ringbuffer.c
 *
 *  Created on: 03.12.2016
 *      Author: Jonas-Lampe
 */


#include <stdlib.h>
#include <stdio.h>

#include "../include/ringbuffer.h"

#define NULL 0
#define TRUE  1
#define FALSE	0

struct ring_buffer {
	size_t size, count, head;
	void **elems;
	void (*free_callback)(void *p);
}ring_buffer;

ring_buffer *init_buffer(const size_t n, void (*f)(void *p)){
}

*read_buffer(ring_buffer *cb){
}

write_buffer(ring_buffer *cb, void *data){
}

int free_buffer(ring_buffer *cb){
}

int count_elements(const ring_buffer *cb){
}

int display_status(const ring_buffer *cb){
}

