#include <stdio.h>

int main()
{
    int n, num, sell, inven, max, min;
    scanf("%d", &n); // 상품 개수(종류) 입력
    int in[n], out[n], remain[n];
    
    for (int i = 0; i < n; i++) { // 상품 별 입고수량 입력
        scanf("%d", &in[i]);
        inven += in[i]; 
    } 
    for (int i = 0; i < n; i++) { // 상품 별 판매수량 입력
        scanf("%d", &out[i]);
        sell += out[i]; // 총 판매량
        remain[i] = in[i] - out[i];
    }
    printf("재고수량: ");
    for(int i=0; i<n; i++){
        printf("%d ", remain[i]); //재고수량
    }

    printf("\n총 판매량: %d (판매율 %.2f%%)", sell, (double)(sell/inven)*100);
    int maxIdx = 0, minIdx = 0;
    for (int i = 1; i < n; i++) {
        if (out[i] > out[maxIdx]) maxIdx = i;
        if (out[i] < out[minIdx]) minIdx = i;
    }
    printf("\n가장 많이 판매된 상품 : ID %d, 판매량 %d\n", maxIdx + 1, out[maxIdx]);
    printf("가장 적게 판매된 상품 : ID %d, 판매량 %d\n", minIdx + 1, out[minIdx]);

    for (int i = 0; i < n; i++) {
        if (remain[i] <= 2) {
            printf("상품 ID %d : 재고부족(%d)\n", i + 1, remain[i]);
        }
    }

    return 0;
}

