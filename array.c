#include <stdio.h>

// 배열 기반 덧셈 프로그램
int main() {
    int numbers[100]; // 최대 100개 저장
    int num, sum = 0, count = 0;

    while (1) {
        printf("숫자를 입력하세요 (0 입력 시 종료): ");
        scanf("%d", &num);
        if (num == 0) break;
        if (count >= 100) {
            printf("배열의 최대 크기를 초과했습니다.\n");
            break;
        }
        numbers[count++] = num;
        sum += num;
    }

    printf("합계: %d\n", sum);
    return 0;
}