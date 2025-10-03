#include <stdio.h>
int A[2000][2000]; // 矩陣，最大 2000×2000
int main() 
{
int N;
scanf("%d", &N); // 讀取矩陣大小
// 讀入矩陣
for (int row = 0; row < N; row++) 
    {
    for (int col = 0; col < N; col++) 
        {
        scanf("%d", &A[row][col]);
        }
    }
// 上半部分（含主對角線）
for (int i = 0; i < N; i++) 
    {
    for (int j = 0; j <= i; j++) 
        {
        int row = i - j;
        int col = j;
        printf("%d", A[row][col]);
        if (j < i) printf(" "); // 元素間空格
        }
        printf("\n");
    }
// 下半部分（不含主對角線）
for (int i = N - 2; i >= 0; i--) 
    {
    for (int j = 0; j <= i; j++) 
        {
        int row = (N - 1) - j;
        int col = (N - 1 - i) + j;
        printf("%d", A[row][col]);
        if (j < i) printf(" ");
        }
    printf("\n");
    }
return 0;
}
