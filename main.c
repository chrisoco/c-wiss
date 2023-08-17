#include <stdio.h>

int main() {
    // Comment
    /*
     * Comment
     */

    printf("Hello world!\n");

    int    a = 0;
    float  b = 3.1; // 4 bytes
    char   c = 'c';
    double d = 10.311; // 8 bytes

    printf("%d\n", a); // %i also works
    printf("%f\n", b);
    printf("%c\n", c);
    printf("%lf\n", d);

    printf("%d, %f, %c\n", a, b, c);

    int e = 3, f = 1;
    printf("Calc: %d\n", e + f * 3);

    char * s = "String";
    char t[10] = "String";
    printf("%s\n", s);

    return 0;
}
