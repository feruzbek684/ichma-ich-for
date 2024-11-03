#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t q = 0; q < n; q++)
        {
            if (i == 0 || q == 0 || i == n - 1 || q == n - 1 || i == q  && q <= 9|| i + q + 1 == n && i >= 10)
            {
                printf("*  ");
                
            }else
            {
                printf("   ");
            }
            
            
        }
        puts("");
    }
    
}