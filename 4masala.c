#include <stdio.h>
int main () {
    int n = 4, son = 1;
    for (int i = 1; i <= n; i++)
    {  
        for (int l = n - 1; l >= i; l--)
        {
            printf("  ");
        }
     
        for (int j = 1; j <= i; j++)
        {     
            printf("%d   ", son);
            son ++;
        }
        puts("");
        
    }
}