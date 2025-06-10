#include <stdio.h>
#include <stdlib.h>

// 연결리스트 기반 덧셈 프로그램
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = NULL;
    int num, sum = 0;

    while (1) {
        printf("숫자를 입력하세요 (0 입력 시 종료): ");
        scanf("%d", &num);
        if (num == 0) break;

        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = num;
        newNode->next = head;
        head = newNode;

        sum += num;
    }

    printf("합계: %d\n", sum);

    // 메모리 해제
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}