#include <stdio.h>
/*
 * main - Entry
 *
 * Return: 0 success
 * */
int main(void)
{
    int i;
    char c;
    long l;
    long long ll;
    float f;
    printf("Size of a char: %d\n",sizeof(c));
    printf("Size of an int: %d\n",sizeof(i));
    printf("Size of a long int: %d\n",sizeof(l));
    printf("Size of an long long int : %d\n",sizeof(ll));
    printf("Size of an float: %d\n",sizeof(f));
    return (0);
}
