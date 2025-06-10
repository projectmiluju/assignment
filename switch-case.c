#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("점수를 입력하세요: ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("당신의 학점은 %c입니다.\n", grade);
    return 0;
}