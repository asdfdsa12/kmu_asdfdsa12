#define _CRT_SECURE_NO_WARNINGS
#include "LinkedList.h"

int main() {
	struct linkedList* myList1;
	myList1 = createLinkedList();

    while(1){
        int menu,item,at;
        printf("1~6 입력: ");
        scanf("%d",&menu);
        switch(menu){
            case 1:
                printf("정수 입력: ");
                scanf("%d",&item);
                insertFirstLinkedList(myList1,(PointType){item,NULL});
                break;
            case 2:
                printf("정수 입력: ");
                scanf("%d",&item);
                insertLastLinkedList(myList1,(PointType){item,NULL});
                break;
            case 3:
                printf("정수, 위치 입력: ");
                scanf("%d %d",&item,&at);
                insertAtLinkedList(myList1,at,(PointType){item,NULL});
                break;
            case 4:
                printf("위치 입력: ");
                scanf("%d",&at);
                deleteAtLinkedList(myList1,at);
                break;
            case 5:
                printLinkedList(myList1);
                break;
            case 6:
                printf("노드 개수: %d\n",sizeLinkedList(myList1));
                break;
            case 0:
                destroyLinkedList(myList1);
                return 1;
            default:
                break;
        }
    }
}
