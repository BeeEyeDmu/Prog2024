// 033_arrPrint.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a[1000] = { 0 };
    int n;

    printf("입력 숫자의 개수 : ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("숫자 입력 : ");
        scanf_s("%d", &a[i]);
    }

    // 앞에서부터 출력
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // 뒤에서부터 출력
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");

    // 최대값 찾기(탐색)
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("max = %d, min = %d\n", max, min);

    // 배열에 저장된 짝수의 개수를 출력하시오
    int cnt = 0;

    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            cnt++;

    printf("짝수의 개수 : %d\n", cnt);
}
