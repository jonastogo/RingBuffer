/*
 * ringbuffer.h
 *
 *  Created on: 03.12.2016
 *      Author: Jonas-Lampe
 */

#ifndef INCLUDE_RINGBUFFER_H_
#define INCLUDE_RINGBUFFER_H_

#define SUCCESS 0
#define ERR_INVAL 1
#define ERR_NOMEM 2

#define FALSE 0
#define TRUE 1

#define QUEUE_GROW_SIZE 5
#define QUEUE_INIT_SIZE 20
#define QUEUE_SHRINK_AT 5

typedef struct queue_s queue_t;

int queue_destroy(queue_t *queue);
int queue_empty(queue_t *queue);
queue_t *queue_new(void);
void *queue_dequeue(queue_t *queue);
int queue_enqueue(queue_t *queue, void *data);

#endif /* INCLUDE_RINGBUFFER_H_ */
