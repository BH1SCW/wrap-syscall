#include <stdio.h>
extern int foo();
extern int __real_foo();

int __wrap_foo() {
    printf("wrap foo\n");
    return 0;
}

int main () {
    printf("foo:");foo();
    printf("wrapfoo:");__wrap_foo();
    printf("realfoo:");__real_foo();
    return 0;
}
