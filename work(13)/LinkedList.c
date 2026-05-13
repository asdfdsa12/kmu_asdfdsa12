#include "LinkedList.h"

LinkedList* createLinkedList() {
	struct linkedList* r;
	r = (struct linkedList*)malloc(sizeof(struct linkedList));

	r->head = (struct pointType*)NULL;
	r->size = 0;

	return r;
}

int destroyLinkedList(LinkedList* li) {
	struct pointType* nptr, * mptr;
	for (nptr = li->head; nptr != NULL; nptr = mptr) {
		mptr = nptr->next;
		free(nptr);
	}

	free(li);

	return 1;
}

int sizeLinkedList(LinkedList* li) {
	return li->size;
}

LinkedList* insertFirstLinkedList(LinkedList* li, PointType item) {
	PointType* ptr = (PointType*)malloc(sizeof(PointType));
	*ptr = item;

	ptr->next = li->head;
	li->head = ptr;
	li->size++;

	return li;
}

int printLinkedList(LinkedList* li) {
	PointType* current = li->head;
	printf("LinkedList:\n");

	for (int i = 0; i < li->size; i++) {
		printf("[%d] item:%d, next:%x\n", 
			i, current->item, current->next);

		current = current->next;
	}
}

LinkedList* insertLastLinkedList(LinkedList* li, PointType item) {
	PointType* ptr = li->head;

	while (ptr->next != NULL) {
		ptr = ptr->next;
	}

	PointType* nPtr = (PointType*)malloc(sizeof(PointType));
	*nPtr = item;
	nPtr->next = NULL;

	ptr->next = nPtr;

	li->size++;

	return li;
}

LinkedList* deleteAtLinkedList(LinkedList* li, int at) {
	if (at >= 0 && at < li->size) {
		PointType* nPtr = li->head;

		for (int i = 0; i < at - 1; i++) {
			nPtr = nPtr->next;
		}

		if (at == 0) {
			PointType* fPtr = li->head;
			li->head = fPtr->next;
			free(fPtr);
		}
		else {
			PointType* fPtr = nPtr->next;
			nPtr->next = fPtr->next;
			free(fPtr);
		}

		li->size--;
	}
}

LinkedList* insertAtLinkedList(LinkedList* li, int at, PointType item) {
    PointType* ptr=li->head;
	if (at >= 0 && at <= li->size) {
	    if(at==0){
	        insertFirstLinkedList(li, item);
	        return li;
	    }
		else if(at==li->size){
		    insertLastLinkedList(li, item);
		    return li;
		}
		else{
    	    for(int i=0;i<at-1;i++){
    	        ptr=ptr->next;
    	    }
            PointType* nptr=(PointType*)malloc(sizeof(PointType));
            *nptr=item;
		    nptr->next=ptr->next;
		    ptr->next=nptr;
		}
		li->size++;
	}
}
