#include <stdio.h>


int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i = 0;

    // while (i < 5)
    // {
    //     printf("%i", a[i]);
    //     i++;
    // }
    
    void swap(int a[], int b[])
    {
        b[0] = a[0];
        b[1] = a[1];
        b[2] = a[2];
        a[0] = a[3];
        a[1] = a[4];
        a[2] = a[5];
    }
    swap(a, b);
    printf("%i", b[0]);
    printf("%i", b[1]); 
    printf("%i", b[2]);
    printf ("%c", '\n');
    printf("%i", a[0]); 
    printf("%i", a[1]);   
    printf("%i", a[2]); 
    return (0);
}