# pointers-concepts

- `&` ==> **displays the address of a variable in memory**
- `%p` is a C format that allows you to print a pointer variable's address

```c
char k;
printf("The variable k is stored in memory at location, %p\n", &k);
```

- `*` ==> **allows you to edit the value stored in a variable address**
    - `int *i;` => *means you're declaring an pointer variable i*
    - `*i = 73;` => * means you're updating the variable of the pointer variable