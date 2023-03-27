#include <stdio.h>

/**
 * modifyParameter - modify a variable's value outside the function it's decalared in using a pointer
 * Return: void
*/
void modifyParameter(int *g)
{
    printf("Value of g is: %p\n", g); /*g is a pointer so this should display the address of the pointer that was passed in the function*/
    printf("G's address is: %p\n", &g);
    
    *g = 187;
}

/**
 * main - prints the largest prime factor
 * Return: 0 for success
 **/

int main(void)
{
    int r = 34;
    int x;
    char n;
    char *pointer1;
    int *pointer2;

    printf("Size of char is %lu bytes\n", sizeof(char));
    printf("Size of int is %lu bytes\n", sizeof(int));
    printf("Size of float is %lu bytes\n", sizeof(float));
    printf("Size of variable x on Windows is %lu bytes\n", sizeof(x));
    printf("Size of variable n on Windows is %lu bytes\n", sizeof(n));
    /*pointers are 8 bytes (64 bits) in size on 64-bit machines
    * 1 byte = 8 bits
    * each bit is either 1 or 0
    */
    printf("Size of pointer1 on Windows is %lu bytes\n", sizeof(pointer1));
    printf("Size of pointer2 on Windows is %lu bytes\n", sizeof(pointer2));
    printf("\n");

    printf("The memory address of variable x is %p\n", &x);
    printf("The memory address of variable n is %p\n", &n);
    printf("The memory address of pointer1 is %p\n", &pointer1);
    printf("The memory address of pointer2 is %p\n", &pointer2);
    printf("\n");

    x = 14;
    n = 'U';
    pointer2 = &x; /*variable pointer2 now holds the address to variable x*/
    pointer1 = &n; /*variable pointer1 now holds the address to variable n*/
    printf("The value of variable x is %lu\n", x);
    printf("The memory address of variable x is %p\n", &x);
    printf("The memory address of pointer2 is %p\n", pointer2);
    printf("The value of variable n is %lu\n", n); /*displays 85 (the ASCII code for U) since bits can only store numbers*/
    printf("The memory address of variable n is %p\n", &n);
    printf("The memory address of pointer1 is %p\n", pointer1);
    printf("\n");

    /*the power of a pointer is that it can manipulate the value stored at the address it point to
    * to manipulate the values, just use the dereferencing operator '*'
    * '*' before a variable basically means, <--this is a pointer and you can manipulate its value-->
    */
    *pointer2 = 2048;
    *pointer1 = 'T';
    printf("The new value of variable x is %lu\n", x);
    printf("The new value of variable n is %lu\n", n);
    printf("\n");
    /*
     * 'int *v;' ==> declares a pointer
     * *v = 790; ==> dereferences the value stored at the pointer i.e mainpulate & edit their values
     */

    printf("r's address is: %p\n", &r);
    modifyParameter(&r);
    printf("The new updated value of variable r is %lu\n", r);
    printf("\n");
    modifyParameter(pointer2);
    printf("The new updated value of variable x is %lu\n", x);

    return (0);
}