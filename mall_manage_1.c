#include <stdio.h>

int main()
{
    int n, num;
    scanf("%d", &n); // 상품 개수(종류) 입력
    int in[n], out[n], remain[n];
    
    for (int i = 0; i < n; i++) { // 상품 별 입고수량 입력
        scanf("%d", &in[i]);
    } 
    for (int i = 0; i < n; i++) { // 상품 별 판매수량 입력
        scanf("%d", &out[i]);
        remain[i] = in[i] - out[i];
    }

    scanf("%d", &num); // ID 입력

    printf("%d\n", remain[num - 1]);
    for(int i=0; i<n; i++){
        printf("%d ", remain[i]);
    }
    
    return 0;
}