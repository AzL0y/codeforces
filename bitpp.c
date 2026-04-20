#include <stdio.h>

/*
PROBLEM 282A
* Calcul

IN :
    int n : number of lines
    string of 3 chars : ++X, --X, X++ , X--
OUT : 
    int x : final value of x
*/

int main()
{
    int n, x = 0;
    char s[5];

    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", s);
        if ((s[1] == '+')) x++;
        else x--;
    }
    printf("%d\n", x);
    return 0;
}
