#include <stdio.h>
#define I9(BODY)               do{ int i=1; while(i<=9){ BODY; i++; } }while(0)
#define J9(BODY)               do{ int j=1; while(j<=9){ BODY; j++; } }while(0)
#define J_FROM_TO(S,E,BODY)    do{ int j=(S); while(j<=(E)){ BODY; j++; } }while(0)
#define SPACES(cols)           do{ int _s=0; while(_s<(cols)){ printf("   "); _s++; } }while(0)
int main(void)
{
/* 1) i=?; j=1..9 標籤 */
I9( printf("i=%d: ", i); J9( printf("j=%d ", j); ); printf("\n"); );
printf("\n");

/* 2) 帶 i 標頭的 (i,j):i*j */
I9( printf("i=%d\n", i); J9( printf("(%d,%d):%d ", i, j, i*j); ); printf("\n"); );
printf("\n");

/* 3) 不帶 i 標頭的 (i,j):i*j */
I9( J9( printf("(%d,%d):%d ", i, j, i*j); ); printf("\n"); );
printf("\n");

/* 4) 9×9 對齊表 */
I9( J9( printf("%2d ", i*j); ); printf("\n"); );
printf("\n");

/* 5) 左下三角：j = 1..i */
I9( J_FROM_TO(1, i, printf("%2d ", i*j); ); printf("\n"); );
printf("\n");

/* 6) 左上三角：j = 1..(10-i) */
I9( J_FROM_TO(1, 10 - i, printf("%2d ", i*j); ); printf("\n"); );
printf("\n");

/* 7) 右上三角：前導 (i-1) 欄；j = i..9 */
I9( SPACES(i - 1); J_FROM_TO(i, 9, printf("%2d ", i*j); ); printf("\n"); );
printf("\n");

/* 8) 右下三角：前導 (9-i) 欄；j = (10-i)..9（每列 i 個） */
I9( SPACES(9 - i); J_FROM_TO(10 - i, 9, printf("%2d ", i*j); ); printf("\n"); );
return 0;
}

