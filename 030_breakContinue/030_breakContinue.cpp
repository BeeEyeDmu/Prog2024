// 030_breakContinue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    // 0이 입력될 때까지 입력된 숫자를 출력하는 프로그램
    for (int i = 1; ; i++) {
        int k;
        printf("숫자 입력(끝내기는 0) : ");
        scanf_s("%d", &k);
        if (k == 0)
            break;
        printf("%d번째 입력 : %d\n", i, k);
    }

    // 3이 배수를 제외하고 1부터 n까지 출력
    int n;
    
    printf("n 입력 : ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");
}
