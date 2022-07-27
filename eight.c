#include <stdio.h>
int fact(int n);
int comb(int n, int r);
int main()
{
    int n, r;
    printf("Enter the n^p^r\n");
    scanf("%d %d", &n, &r);
    printf("arrangement is %d", comb(n, r));
    return 0;
}
int fact(int n)
{
    int i = 1, n1 = 1;
    while (i <= n)
    {
        n1 = n1 * i;
        i++;
    }
    return n1;
}
int comb(int n, int r)
{
    int com;
    if (n >= r)
    {
        com = (fact(n) )/ (fact(n - r));
        return com;
    }
    else
    {
        printf("n is less than r so ");
        return 0;
    }
}