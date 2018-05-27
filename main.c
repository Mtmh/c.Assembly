#include <stdio.h>

int main(void)
{
    int a, b, c, d, e = 0;


    asm("movl %5,%0\n"
        "movl %6,%1\n"
        "movl %7,%2\n"
        "movl %8,%3\n"
        "movl %9,%4\n"
        : "=g" (a), "=g" (b), "=g" (c), "=g" (d), "=g" (e)
        : "g" (1),"g" (2), "g" (3), "g" (4), "g" (5)
        : // no hay clobers

    );

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);





    // con clobbers

   /* asm("movl %1,%%eax\n"
        "movl %%eax,%0\n"
        : "=g" (a)
        : "g"  (8)
        : "%eax"
    );*/


    //Una opcion

    /*asm("movl %[valor_de_a],%[variable_a]\n"
        : [variable_a] "=g" (a)
        : [valor_de_a] "g" (7)
        : // clobers
    );*/

    //Segunda Opcion

   /* asm("movl %1,%0\n"
    : "=g" (a) // salida
    : "g" (5) // entrada
    : // clobbers
    );*/

    printf("a: %d\n", a);

    return 0;
}
