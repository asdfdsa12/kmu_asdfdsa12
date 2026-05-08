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