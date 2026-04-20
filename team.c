#include <stdio.h>

/*
* Problem 232A
* n problems that are implemented if at least 2/3 integers set to 1

IN :
    int n : number of lines
    3 integers set to 1 or 0 each
OUT : 
    int x : number of problems to implement
*/

int main()
{
    int n, x = 0;
    int a, b, c;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a+b+c >=2) x++;
    }
    printf("%d\n", x);
    return 0;
}
