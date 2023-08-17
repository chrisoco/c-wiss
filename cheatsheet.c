#include <stdio.h>

int main() {

    // Normal Console Print
    printf("Hello world!\n");

    // Primitive Datatypes
    int    a = 0;
    float  b = 3.1;    // 4 bytes -> 6-7 decimal digits
    char   c = 'c';    // 1 byte  -> single char
    double d = 10.311; // 8 bytes -> 15 decimal digits

    printf("%d\n", a);  // int %i also works
    printf("%f\n", b);  // float
    printf("%c\n", c);  // char
    printf("%lf\n", d); // double

    // Example Multiple
    printf("%d, %f, %c\n", a, b, c);

    int e = 3, f = 1;
    printf("Calc: %d\n", e + f * 3);

    // Explicit Conversion:
    int example = 5 / 2; // -> Results in 2

    float sum = (float) 5 / 2;
    printf("%f \n", sum);  // 2.500000

    // Float Runden auf Nachkommastellen:
    printf("%.1f \n", sum);  // 2.5
    printf("%.2f \n", sum);  // 2.50

    // String
    char * s = "String";
    char t[10] = "String";
    printf("%s\n", s);


    // const
    // Not changeable after declaration:
    const int num = 15;  // num will always be 15
    // num = 10;  // error: assignment of read-only variable 'myNum'


    /*
     * Operators
     *  + Addition
     *  - Subtraction
     *  * Multiplication
     *  / Division
     *  % Modulo
     *  ++ Increment
     *  -- Decrement
     *
     *  +=
     *  -=
     *  *=
     *  /=
     *  %=
     *
     *  ==
     *  !=
     *  >
     *  <
     *  >=
     *  <=
     *
     *  Logical Operators
     *  &&
     *  ||
     *  !
     *
     */


    return 0;
}
