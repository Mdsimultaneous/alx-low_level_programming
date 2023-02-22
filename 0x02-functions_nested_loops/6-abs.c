#include "main.h"
/**
*_abs-prints the absolute value of an integer.
*@a:the integer to compute its absolute value.
*Return:returns the abs value.
*
*/
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
