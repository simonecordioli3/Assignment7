#ifndef __DOUBLE_INVERT_H__
#define __DOUBLE_INVERT_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int value;		    // dato
    struct Node *next;	// link
} Node;

// Aggiunge in coda alla lista di input nuovi nodi in modo da raddoppiarne la lunghezza originale
// I nuovi nodi dovranno contenere gli stessi valori dei nodi originali, ma in ordine inverso
void double_invert(struct Node* head); 

#endif // __DOUBLE_INVERT_H__