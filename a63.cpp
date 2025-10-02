#include <stdio.h>
int main() 
{
char ch;       // 要印的字元
int n, m;      // n=波浪高度, m=波浪數量
int i, j, wave, row;
// 讀取輸入
scanf(" %c%d%d", &ch, &n, &m);  // 注意這裡加了空白，避免吃到換行
// Step 1: 外層控制 m 組波浪
for (wave = 1; wave <= m; wave++) 
    {
// Step 2: 內層控制 2n-1 行
    for (row = 1; row <= 2 * n - 1; row++) 
        {
        int count;
        if (row <= n) 
            count = row;     // 上升部分
        else 
            count = 2 * n - row;   // 下降部分
        if (wave > 1 && row == 1) 
            count--;   // 第二組開始，第一行削掉1
        if (wave == m && row == 2 * n - 1) 
            count = 1; // 最後一行強制保留1
        if (count > 0) 
            {   // 避免 count=0 時印出空白行
            for (j = 0; j < count; j++) printf("%c", ch);
            printf("\n");
            }
        }
    }
return 0;
}
