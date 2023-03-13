#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *p, index;
    p = (int *)malloc(2 * sizeof(int));
    for (index = 0; index < 2; index++)
    {
        *(p + index) = index + 1;
        printf("%p adresindeki değer: %d\n", (p + index), *(p + index));
    }
    p = (int *)realloc(p, 4 * sizeof(int));
    printf("\nBellek Genişletildi, ek değerler:\n\n");
    for (; index < 4; index++)
    {
        // Burada index değişken değeri 2 olarak başlar.
        *(p + index) = index + 1;
        printf("%p adresindeki değer: %d\n", (p + index), *(p + index));
    }
    free(p);

    return 0;
}