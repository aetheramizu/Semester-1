#include <stdio.h>

long long faktorial (int x) {
    if (x<=1)
    return x;
    else return (  x * faktorial(x-1));
}

int main () {
    int n;
    for (int i=0; i<5; i++) {
        scanf ("%d", &n);
        printf ("%d\n", faktorial (n));
    }
    return 0;
}