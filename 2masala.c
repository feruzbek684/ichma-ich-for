#include <stdio.h>
int main () {
    int n = 4;
    for (int i = 1; i <= n; i++)
    {  
        for (int j = n - 1; j >= i; j--)
        {
            printf("");
        }
     
        for (int l = 1; l <= i; l++)
        {     
            printf("%d ", i);
        }
        puts("");
        
    }
}