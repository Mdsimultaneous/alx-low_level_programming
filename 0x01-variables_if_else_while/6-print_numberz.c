#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int a)
{
    int k = a;
    int absvalue;

    if (k < 0)
    {
        k = k * (-1);
    }
    absvalue = k;
    return (absvalue);
}
