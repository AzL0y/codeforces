#include <stdio.h>
#include <stdbool.h>

/*
PROBLEM 4A
* Says whether weight can be split into 2 even numbers

IN : weight (int w)
OUT : YES / NO
*/

int main()
{
    int w;
    scanf("%d", &w);

    if (w % 2 == 0 && w > 2) printf("YES");
    else printf("NO");
    return 0;
}
