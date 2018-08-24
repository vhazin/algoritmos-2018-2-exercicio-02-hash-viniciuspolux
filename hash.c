#include <stdio.h>

int main(void)
{
    unsigned long int t, indice, i, resultado, cont = 0;
    scanf("%lu", &t);
    unsigned long int a, b, x, n, c, d, m, parcial = 0;
    for (indice = 0; indice < t; indice++)
    {
        scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &x, &n, &c, &d, &m);
        parcial = a * x + b;
        resultado = parcial % m;
        if (resultado >= c && resultado <= d)
            cont++;
        for (i = 1; i <= n; i++)
        {
            parcial = parcial + a;
            if (parcial < m)
                resultado = resultado + a;
            else
                resultado = parcial % m;
            if (resultado >= c && resultado <= d)
                cont++;
        }
        printf("%lu\n", cont);
        cont = 0;
    }
    return 0;
}