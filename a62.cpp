#include <stdio.h>
int main() 
{
char ch;       // 要印的字元
int n, m;      // n=波浪高度, m=波浪數量
int line[200]; // 陣列，存一個波浪每行字元數
int idx = 0;   // 記錄 line[] 有幾個元素
int i, j, wave, row;
// 讀取輸入（在 %c 前加空白，避免讀到換行或空格）
scanf(" %c%d%d", &ch, &n, &m);
// Step 1: 建立波浪形狀
for (i = 1; i <= n; i++) 
    line[idx++] = i;   // 上升部分
for (i = n - 1; i >= 1; i--) 
    line[idx++] = i; // 下降部分
// line[] 現在是 1,2,...,n,n-1,...,2,1

// Step 2: 印 m 個波浪
for (wave = 1; wave <= m; wave++) 
    {
    for (row = 0; row < idx; row++) 
        {
        int count = line[row]; // 當前行的字元數
        if (wave > 1 && row == 0) 
            count--;         // 第二組開始，第一行削掉1
        if (wave == m && row == idx - 1) 
            count = 1; // 最後一行強制保留1
        if (count > 0) 
            {   // 只有當 count > 0 才輸出
            for (j = 0; j < count; j++) 
                printf("%c", ch);
            printf("\n");
            }
        }
    }
return 0;
}


