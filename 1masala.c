#include <stdio.h>
int main () { 
    int n = 6;
    for (size_t i = 1; i < n; i++)
    {   
        for (size_t t = 1; t < i; t++)
        {     
            printf("%d ", t);
        }
        puts("");
        
    }
    
}